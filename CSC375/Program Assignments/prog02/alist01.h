const int LIST_SIZE = 10;
template <class ELEM>
class List {                  // Array-based list class
private:
  int msize;                  // Maximum size of list
  int numinlist;              // Actual number of ELEMs in list
  int curr;                   // Position of "current" ELEM
  ELEM* listarray;            // Array holding list ELEMs
public:
  List(int =LIST_SIZE);       // Constructor
  ~List();                    // Destructor
  void clear();               // Remove all ELEMs from list
  void insert(const ELEM);    // Insert ELEM at current position
  void append(const ELEM);    // Insert ELEM at tail of list
  ELEM remove();              // Remove and return current ELEM
  void setFirst();            // Set curr to first position
  void prev();                // Move curr to previous position
  void next();                // Move curr to next position
  int  length() const;        // Return current length of list
  void setPos(int);           // Set curr to specified position
  void setValue(const ELEM);  // Set current ELEM's value
  ELEM currValue() const;     // Return current ELEM's value
  bool isEmpty() const;       // Return TRUE if list is empty
  bool isInList() const;      // TRUE if curr is within list
  bool find(int);             // Find value (from current position)
};
