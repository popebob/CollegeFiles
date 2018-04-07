//Matthew June
//csc336 program 1

/****************************************************************/
/* udpserv.c - simple connectionless UDP server.                */
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


struct userinfo        /*This structure contains information about hosts*/
{
        sockaddr_in hin;       /*host socket address*/
        char uname[20];        /*User names*/
};



extern int errno;
main (int argc, char *argv[])
{
  int i,j;
  int s;                                /* Network socket.      */
  int fd;                               /* TCP connection.      */
  int len;                              /* Length.              */
  struct sockaddr_in sin;               /* Socket address.      */
  int sinlength;                        /* length of above.     */
  char buf[BUFSIZ];                     /* data buffer.         */

  char temp[20];                        /* used to hold some small strings to check for commands or user names*/
  char tempbuf[BUFSIZ];                 /* temporary buffer to copy data into. */
  userinfo users[3];                    /*Array of userinfo structs to keep track of hosts*/
  int currhost;                         /*keeps track of which host the server is receiving from*/
  bool found;                           /*determine whether or not a match is found*/
  int buflen;
  char x;
  char strinput[50];
  struct sockaddr_in from;
  socklen_t fromlen;
  char reply[80] = "hi there";

  int action;                           /* An action to read    */

/* Here is the structure describing an Internet (IP) socket address:    */
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

  while (1)                             /* Infinite loop                */
  {

// Receive a message from anyone.


// for example:
   j=recvfrom(s,buf,buflen,0,(sockaddr *) &from,&fromlen);


// Maybe copy the receive buffer into another temp. buffer.
strcpy(tempbuf, buf);


// Check to see if it's a new client (new unique host/port number)

for(int k=0; k<3; k++)
{
        if(users[k].hin.sin_port==from.sin_port && users[k].hin.sin_addr==from.sin_addr) {
                found==true;
                currhost=k;
}

//If a match is not found, the message is assumed to be the users name and the users info is copied into the users array

if(!found)
{
        for(k=0; k<3; k++){
                if (users[k].uname=="\0")
                {
                        strcpy(users[k].uname,tempbuf);
                        users[k].hin.sin_port=from.sin_port;
                        users[k].hin.sin_addr=from.sin_addr;
                        users[k].hin.sin_family=from.sin_family;
                        k=2;
                } } }
//If a match is found, the server determines if it is a quit, general message, or private message
else
{
found=false;
// Checks to see if .quit was received, if it was the uname is nulled out so that user spot can be reused
if(strcmp(tempbuf, ".quit"))
        strcpy(users[currhost].uname,"\0");
// If it was a private send, send it to a particular user.
else{
strncpy(temp, tempbuf, 5);
//If the send command is issued, the name of the host is determined and the message is sent to that host only
if(strcmp(temp, ".send")){
         k=6;
//copy the target user name into the temp variable
        while(tempbuf[k]!=' '){
                temp[k-6]=tempbuf[k];
                k++; }
        k=0;
//Find the position of the user in the array, store it in k
        while(!strcmp(temp, users[k].uname))
                k++;
//Send the message to the user
        j = sendto(s, tempbuf, strlen(tempbuf), 0, (sockaddr *) &users[k].hin, &fromlen);

    if (j < 0)
    {
      cout << "errno was this:  " << errno << endl;
      if (errno == EINVAL) cout << "yup" << endl;
      perror ("sendto");
      exit(1);
    }
}

//Send to everyone else if its not a private send
else{
      for (k=0; k<3; k++){
   j=sendto(s, tempbuf, strlen(tempbuf), 0, (sockaddr *) &users[k].hin, &fromlen);}

  }
}
}
