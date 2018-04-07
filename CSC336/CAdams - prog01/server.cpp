//****************************************************************
// server.cpp - simple connection-oriented TCP server.
//****************************************************************

#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <ctype.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <string.h>
using namespace std;

extern int errno;
main (int argc, char *argv[])
{
  int s;                                /* Network socket.      */
  int fd;                               /* TCP connection.      */
  int len;                              /* Length.              */
  struct sockaddr_in sin;               /* Socket address.      */
  int sinlength;                        /* length of above.     */
  char buf[BUFSIZ];                     /* data buffer.         */
  int buflen;
  FILE *f;
  char x;
  char strinput[50];

  int action;                           /* An action to read    */

/************************/
/* Create the socket.   */
/************************/
  if ((s = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
    perror ("socket");
    exit(1);
  }

  sin.sin_family = AF_INET;             /* Internet family      */
  sin.sin_addr.s_addr = INADDR_ANY;     /* Receive from anywhere*/
  sin.sin_port = 0;                     /* System chooses port  */

  sinlength = sizeof(sin);
/****************************************/
/* Bind address to local end of socket. */
/****************************************/
  if (bind(s, (struct sockaddr *) &sin, sinlength) < 0) {
    perror ("bind");
    exit(1);
  }

  if (getsockname(s, (struct sockaddr *) &sin, (socklen_t *) &sinlength) < 0)
  {
    perror("getsockname");
    exit(1);
  }
  cout << "Socket is using port " << sin.sin_port << endl;

/************************************************/
/* Accept connections from remote clients.      */
/************************************************/
  listen (s, 5);			/* Tells the server: listen with*/
					/* up to 5 connections per	*/

  while (1)                             /* Infinite loop        	*/
  {
    action = -1;
    fd = -1;
    while (fd < 0)			/* Error checking.		*/
    {
      fd = accept(s, (struct sockaddr *) &sin, (socklen_t *) &sinlength);
      if ((fd < 0) && (errno != EINTR)) {
        perror ("accept");
        exit(1);
      }
    }
/****************************************************************/
/* Create child processes to perform work.  Server waits for    */
/* additional connections.                                      */
/****************************************************************/

    if (fork () == 0) {			/* Fork a child.  If result of	*/
					/* the fork is zero, then this	*/
					/* is a child process.		*/
      while (action) {
      	read(fd, &action, sizeof action);
cout << "got a read with action = " << action  << endl;
        if (action == 0)
          cout << "User typed quit.  Terminating" << endl;

      }	/* end while */
      exit(0);  /* make sure the child exits or you get zombie process */  
    }	/* end of fork */

    /* This below is what the parent needs to do before it goes	*/
    /* back to the "while (1)" statement.			*/

    close(fd);
    if (errno == EINTR) 	/* If we got an interrupt, then */
      close(fd);                /* try closing it again (only	*/
				/* slightly fault tolerant).	*/
  }                             /* end WHILE.			*/
}

