/****************************************************************/
/* Simple client.  argv[1] must be host name.  argv[2] must be  */
/* correct port number.  It won't work otherwise (little or no  */
/* error checking).                                             */
/****************************************************************/

#include <stdio.h>
#include <iostream.h>

#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdlib.h>

#include <string.h>

extern int errno;

main (int argc, char *argv[])
{
  char hname[255];                      // FQDN?  I hope.
  struct sockaddr_in sin;               // Socket address.
  struct sockaddr_in lin;               // local socket address.
  socklen_t          sinlength;
  socklen_t          linlength;
  struct hostent *ph;                   // Host entry.
  int thesock;                          // TCP socket.
  int len;                              // Length.
  long address;                         // IP address.
  char host[20];                        // Remote host.
  char strinput[80];
  char strinput2[50];
  char msg[50];                         //message to be sent
  char buf[50];
  char x;
  struct sockaddr to_addr;
  struct sockaddr from;
  socklen_t fromlen;
  int i;                        // Return value from sendto

//
// Find Internet address of remote host.
//
  strcpy(host, argv[1]);        /* really error-free, isn't it? */

  if ((ph = gethostbyname (host)) == NULL) {
    switch (h_errno) {
      case HOST_NOT_FOUND:
        fprintf(stderr, "%s:  no such host %s\n", argv[0], host);
        exit(1);
      case TRY_AGAIN:
        fprintf(stderr, "%s:  host %s, try again later\n", argv[0], host);
        exit(1);
      case NO_RECOVERY:
        fprintf(stderr, "%s:  host %s DNS ERROR\n", argv[0], host);
        exit(1);
      case NO_ADDRESS:
        fprintf(stderr, "%s:  No IP address for %s\n", argv[0], host);
        exit(1);
      default:
        fprintf(stderr, "Unknown error: %d\n", h_errno);
        exit(1);
    }
  }
  else {
    memcpy ((char *) &sin.sin_addr, (char *) ph ->h_addr, ph -> h_length);
    cout << "I get this as address:  " << sin.sin_addr.s_addr << endl;
    sin.sin_family = PF_INET;
  }

  i = gethostname(hname,len);

/****************************************/
/* Get port number of IP server.        */
/****************************************/
  sin.sin_port = atoi(argv[2]);

/************************/
/* Open a socket.       */
/************************/
  if ((thesock = socket (PF_INET, SOCK_DGRAM, 0)) < 0) {
    perror ("socket");
    exit(1);
  }

  lin.sin_family = PF_INET;
  lin.sin_addr.s_addr = INADDR_ANY;
  lin.sin_port = 0;

  linlength = sizeof(lin);

  if (bind(thesock, (struct sockaddr *) &lin, linlength) < 0) {
    perror ("bind");
    exit(1);
  }

  if (getsockname(thesock, (struct sockaddr *) &lin, (socklen_t *) &linlength) < 0)
  {
    perror("getsockname");
    exit(1);
  }
  cout << "Local socket is using port number " << lin.sin_port << endl;

// Ask the user for their username, then send it to the server.

  cout << "Please enter your user name now"<<endl;
  cin.getline(msg,50);
  len = sizeof(hname);
  sinlength = sizeof (struct sockaddr_in);
  i = sendto(socket(), msg, strlen(msg), 0,(sockaddr *) &sin, & sinlength);
// and check for errors here.
  if (i<0)
  {
        cout<<"An error occured while trying to connect to the server"<<endl;
        cout<<"Error code is: "<<errno<<endl;
        perror("send to");
        exit(1);
  }
//***********************************************************************
// As a client, all we do is to send what our user types and then
// receive/print whatever the server sends to us.  This is done in an
// (effectively) infinite loop, until the user types ".quit".
//
// A note:  it may work well if you create a child process to do
// the printing and a parent process to do the sending.  Use fork().
//***********************************************************************

// So it may look something like this, although this logic is flawed:

  while (strcmp(strinput,".quit")) {

  // (get some input)
  cin.getline(msg,50);
  // (send a message to the server)
  i = sendto(socket(), msg, strlen(msg), 0,(sockaddr *) &sin, sinlength);
  cout<<"Message sent"<<endl;
  // (receive something from the server)
  recvfrom(socket(), buf, len, 0, (sockaddr *) &from, &fromlen);
  cout<<msg<<endl;
  }                             // End while
  close(thesock);
