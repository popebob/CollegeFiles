class sortedVList {
	public:
	// constructors
	sortedVList  ();
 	// This constructor, prompts the user to enter the name of a data
	// file, then invokes getData with the input external file name,
	// to load the contents of the input data file into the private 
	// vector names (see below)

	// Function prototype
	void getData( char *fname);

	void sortList( );
`	// Sorts the vector of names in ascending order
    
	int search (string key);
`	// Searches the vector of names for the string argument
	// Returns the location of the match within the list if the key
	// value is located, otherwise returns -1

	bool removeName (string name);
	//If the argument name is in the vector list of names, 
//  removes the name and returns true, otherwise returns false
    void insertName (string name);
	// Adds the argument name to the list of names, while keeping the
	// order sorted.
	void displaySortedNames( );
	// Outputs to standard output the  list of names, 
	// one name per line.

 private:
   vector<string> names;
   string upperCaseIt(const string); 
  // This is a private utility function, I created to help implement
  // searches and sorting that was not case sensitive.
};