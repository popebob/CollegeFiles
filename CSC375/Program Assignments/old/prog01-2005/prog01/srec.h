#include <string>

class Srec {

  private:
    char lname[20];		// Last name
    char fname[20];		// First name
    char mi;			// Middle initial
    char id[8];			// id
    float gpa;			// gpa

  public:
    Srec();					// Empty constructor
    Srec(char *,char *, char, char *, float);	// Constructor with params


//  Operators you must define:
//  >>, <<, <, maybe >, and operator=

};
