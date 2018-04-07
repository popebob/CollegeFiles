#include "cityrec.h"
CityRec::CityRec() {
  name = " ";
  state = " ";
  x = y = 0;
  population = 0;
}

CityRec::CityRec(int xcoord, int ycoord, int newpop, string newname, string newstate) {
  x = xcoord;
  y = ycoord;
  population = newpop;
  name = newname;
  state = newstate;
}
