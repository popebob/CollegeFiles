#include <string>
using namespace std;

class CityRec {

  private:
    int x, y;			// Cartesian coordinates
    int population;		// The population.
    string name;		// City name up to the comma (see data files)
    string state;		// State or country abbreviation

  public:
    CityRec();					// Default constructor
    CityRec(int, int, int, string, string);	// Constructor with params

//  Operators you must define:
//  >>, <<, <, maybe >, and operator=
//  perhaps >= and/or <=

};
