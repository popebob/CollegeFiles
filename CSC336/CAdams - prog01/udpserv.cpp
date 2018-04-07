/****************************************************************/
/* udpserv.c - simple connectionless UDP server.		*/
/****************************************************************/

#include <stdio.h>
#include <iostream.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <string.h>

extern int errno;
main (int argc, char *argv[])
{
  int i;
  int s;                                /* Network socket.      */
  int fd;                               /* TCP connection.      */
  int len;                              /* Length.              */
  struct sockaddr_in sin;               /* Socket address.      */
  int sinlength;                        /* length of above.     */
  char buf[BUFSIZ];                     /* data buffer.         */
  int buflen;
  char x;
  char strinput[50];
  struct sockaddr_in from;
  socklen_t fromlen;
  char reply[80] = "hi there";

  int action;                           /* An action to read    */

/* Here is the structure describing an Internet (IP) socket address:	*/
/* struct sockaddr_in {
  sa_family_t           sin_family;     // Address family
  unsigned short int    sin_port;       // Port number
  struct in_addr        sin_addr;       // Internet address

  // Pad to size of `struct sockaddr'.
  unsigned char         __pad[__SOCK_SIZE__ - sizeof(short int) -
                        sizeof(unsigned short int) - sizeof(struct in_addr)];
}; */


/************************/
/* Create the socket.   */
/************************/
  if ((s = socket(PF_INET, SOCK_DGRAM, 0)) < 0) {
    perror ("socket");
    exit(1);
  }

  sin.sin_family = PF_INET;             /* Internet family      */
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
//  cout << "Socket is using port" << sin.sin_port << endl;
  printf("Socket is using port %d\n",sin.sin_port);

  while (1)                             /* Infinite loop        	*/
  {

// Receive a message from anyone.

    recvfrom( ... );
// for example:
    recvfrom(sock,recvbuf,buflen,0,(sockaddr *) &from,&fromlen);


// Maybe copy the receive buffer into another temp. buffer.

// Check to see if it's a new client (new unique host/port number)

// Check to see if the user typed 'quit' - if so, send a quit
// back to them.  (This allows that child process to terminate...)

// If it was a private send, send it to a particular user.

    i = sendto(s, buf, strlen(buf), 0, (sockaddr *) &from, fromlen);
    if (i < 0)
    {
      cout << "errno was this:  " << errno << endl;
      if (errno == EINVAL) cout << "yup" << endl;
      perror ("sendto");
      exit(1);
    }

// Otherwise, just send it to everyone:

//    for (i = 0 to some counter)
//      j = sendto(...)

  }
}

