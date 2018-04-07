#include "srec.h"

Srec::Srec() {
  strcpy(lname,"    ");
  strcpy(fname,"    ");
  strcpy(id,"        ");
  mi = ' ';
  gpa = 0.0;
}

Srec::Srec(char *l, char *f, char m, char *i, float g) {
  strcpy(lname,l);
  strcpy(fname,f);
  mi = m;
  strcpy(id,i);
  gpa = g;
}

