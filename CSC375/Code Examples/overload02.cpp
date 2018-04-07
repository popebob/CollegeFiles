#include <iostream>

using namespace std;

// Faked-up student record class
//
class SRec {
 private:
  char *lname;		// Last name
  char *fname;		// First name
  char *id;		// Student ID
  float gpa;		// Grade pt. avg.


public:
  SRec(char *, char *, char *, float);	// A couple of constructors
  SRec();

  void setLName(const char *);		// Access to last name

  SRec & operator=(const SRec & rhs);	// An overloaded operator defined
					// in the class.

//
// Friend declarations to allow overloaded operators, defined
// outside the class, access to the class.
//
  friend ostream &operator<<(ostream&, const SRec &);
  friend bool operator<(SRec &, SRec &);

};

//***************************************************************
// Externally-defined operator<.  This must be given two arg's
// since there's not an implicit "this" object available to it.
//***************************************************************
bool operator<(SRec & lhs, SRec & rhs) {
  return (lhs.lname < rhs.lname);	// ain't that simple?
}

//***************************************************************
// Since this operator= is defined inside the class, we only
// have to give it one parameter:  the right hand side (rhs).
// Since the lhs must already be defined, it probably has some
// contents, so we use delete to remove stuff from it then copy
// the strings from the right hand side as below:
//***************************************************************
SRec & SRec::operator=(const SRec & rhs) {
  delete [] lname;
  delete [] fname;
  delete [] id;
  lname = strdup(rhs.lname);
  fname = strdup(rhs.fname);
  id = strdup(rhs.id);
  gpa = rhs.gpa;
  return *this;
}

//***************************************************************
// Construct it with parameters.
//***************************************************************
SRec::SRec(char *l, char *f, char *i, float g) {
  lname = strdup(l);
  fname = strdup(f);
  id = strdup(i);
  gpa = g;
}

//***************************************************************
// Construct it with no parameters.
//***************************************************************
SRec::SRec() {
  lname = NULL;
  fname = NULL;
  id = NULL;
  gpa = 0.0;
}

//***************************************************************
// Since nobody "outside" is supposed to have access to private
// parts, we must use a function instead.
//***************************************************************
void SRec::setLName(const char *x) {
  delete [] lname;
  lname = strdup(x);
}

//***************************************************************
// Externally-defined overloaded operator for I/O.  Note how I
// added a bunch of (really unnecessary) extra output stuff
// here, just to show that it can be done.
//***************************************************************
ostream &operator<<(ostream & o, const SRec &s1) {
  return (o << "last name = " << s1.lname << endl
  << "first name = " << s1.fname << endl
  << "and their gpa is " << s1.gpa << endl
  << "Yahoo! We are done." << endl);
}

int main(void) {
  SRec s1("Turner","Stephen","87654321",4.0);
  SRec s2;

  s2 = s1;

  cout << s1 << endl;
  cout << "Here is s2: " << endl;
  cout << s2 << endl;

  s2.setLName("Jones");
  cout << "New values in the objects:" << endl;

  cout << "s1 has: " << endl << s1 << endl;
  cout << "Here is s2: " << endl;
  cout << s2 << endl;

  if (s1 < s2)
    cout << "s1 is less";
  else
    cout << "s2 is ge" << endl;
  return 0;
}
