/****************************************************************/
/* Simple client.  argv[1] must be host name.  argv[2] must be  */
/* correct port number.  It won't work otherwise (little or no  */
/* error checking).                                             */
/****************************************************************/

#include <iostream>

#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <cstdlib>

#include <string.h>

using namespace std;

main (int argc, char *argv[])
{
  int RUN;              /* Flag:  whether to query only running */
  int QUEUE;            /* Flag:  whether to query only queued. */
  FILE *fp;
  int action;                   /* Action to be performed.      */

  struct sockaddr_in sin;               /* Socket address.      */
  struct servent *ps;                   /* Server entry.        */
  struct hostent *ph;                   /* Host entry.          */
  int s;                                /* TCP socket.          */
  int len;                              /* Length.              */
  long address;                         /* IP address.          */
  char host[20];                        /* Remote host.         */
  char strinput[50];
  char strinput2[50];
  char x;

/****************************************/
/* Find Internet addr. of host.         */
/****************************************/
  strcpy(host, argv[1]);        /* really error-free, isn't it? */

  if ((ph = gethostbyname (host)) == NULL) {
    switch (h_errno) {
      case HOST_NOT_FOUND:
        cerr << argv[0] << ":  no such host " << host;
        exit(1);
      case TRY_AGAIN:
        cerr << argv[0] <<  ":  host " << host << ", try again later" << endl;
        exit(1);
      case NO_RECOVERY:
        cerr << argv[0] << ":  host " << host << " DNS ERROR" << endl;
        exit(1);
      case NO_ADDRESS:
        cerr << argv[0] << ":  No IP address for " << host << endl;
        exit(1);
      default:
        cerr <<  "Unknown error:  " << h_errno << endl;
        exit(1);
    }
  }
  else {
    memcpy ((char *) &sin.sin_addr, (char *) ph ->h_addr, ph -> h_length);
    sin.sin_family = AF_INET;
  }

/****************************************/
/* Get port number of IP server.        */
/****************************************/
  sin.sin_port = atoi(argv[2]);

/************************/
/* Open a socket.       */
/************************/
  if ((s = socket (AF_INET, SOCK_STREAM, 0)) < 0) {
    perror ("socket");
    exit(1);
  }

/********************************/
/* Connect to remote server.    */
/********************************/
  if (connect (s, (struct sockaddr *) &sin, sizeof (sin)) < 0) {
    perror ("connect");
    fprintf(stderr,"Daemon must not be running...\n");
    exit(1);
  }

/****************************************************************/
/* All we do is to send a value indicating what action is being */
/* performed.  Then quit.                                       */
/****************************************************************/
  action = -1;
  while (action != 0) {
    cin >> strinput;

    if (strcmp(strinput,"quit") == 0) {
		action=0;
    }
    send(s,&action,sizeof action,0);

  }	/* end while */

  close(s);
}


