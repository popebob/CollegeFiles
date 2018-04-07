using namespace std;

class Gentree {                // Gentree for UNION/FIND
private:
  int* array;                  // Node array
  int size;                    // Size of node array
  int FIND(int) const;         // Find root
public:
  Gentree(int);                // Constructor
  ~Gentree() { delete [] array; } // Destructor
  void UNION(int, int);        // Merge equivalences
  bool differ(int, int);       // TRUE if not in same tree
  void Gentree::PRINT(int, int); // Print the Gentree
  void Gentree::MakeMaze(Gentree*, int, int );    // Make a random maze
};

Gentree::Gentree(int sz) {     // Constructor
  size = sz;
  array = new int[sz];      // Create node array
  for(int i=0; i<sz; i++) array[i] = ROOT;
}

// Return TRUE if nodes are in different trees
bool Gentree::differ(int a, int b) {
  int root1 = FIND(a);   // Find root of node a
  int root2 = FIND(b);   // Find root of node b
  return root1 != root2;             // Compare roots
}

void Gentree::UNION(int a, int b) {  // Merge two subtrees
  int root1 = FIND(a);   // Find root of node a
  int root2 = FIND(b);   // Find root of node b
  if (root1 != root2)    // Merge
  {                      //Added bit for weighted union
     if ( root1 > root2 )
        array[root2] = root1; 
     else
         array[root1] = root2;
  }
}

int Gentree::FIND(int curr) const { // With path compression
  if (array[curr] == ROOT) return curr;  // At root
    return array[curr] = FIND(array[curr]);
}

//****************void Gentree::PRINT()***************************//
void Gentree::PRINT(int rows, int columns) 
{
    int n = 1;
    while ( ( n + columns ) < size )     //not in last row yet
    {
          if ( n - columns <= 0 )   //first row
          {
             if ( n % columns == 1 ) //first column; furthermore, start position
                cout << "!S";   //print start marker
             else if ( differ( n, ( n - 1 ) ) ) //no path to left
                     cout << "|";    //draw wall to left
                  else
                      cout << " ";    //draw space to indicate open passage left
             if ( differ( n, ( n + columns ) ) ) //no path to below
                cout << "_"; //draw cell floor
             else                                //path to below exists
                cout << " "; //draw open floor
             if ( n % columns == 0 ) //last column
                cout << "|!" << endl;
          }
          else                      //no longer in top row
          {
             if ( n % columns == 1 ) //first column
                cout << "!|";   //print column marker
             else if ( differ( n, ( n - 1 ) ) ) //no path to left
                     cout << "|";    //draw wall to left
                  else
                      cout << " ";    //draw space to indicate open passage left
             if ( differ( n, ( n + columns ) ) ) //no path to below
                   cout << "_"; //draw cell floor
             else                                //path to below exists
                   cout << " "; //draw open floor
             if ( n % columns == 0 ) //last column
                cout << "|!" << endl;
          }
          n++;
    }                           //stops before last column of second-to-last row
    //below is hack code for a special situation, but I don't know why it occurs
    if ( differ( n, ( n - 1 ) ) ) //no path to left
       cout << "|";    //draw wall to left
    if ( differ( n, ( ( n - 1 ) + columns ) ) ) //no path to below
       cout << "_"; //draw cell floor
    else
       cout << " "; //draw open floor
    if ( n % columns == 0 ) //last column
       cout << "|!" << endl;
    //now in last row, certain assumptions can be made
    cout << "!|";   //print column marker
    for ( n = 1; n <= columns; ++n)
    {
        if ( differ( n, ( n + columns ) ) ) //no path to below
           cout << "_"; //draw cell floor
        if ( n % columns == 0 ) //last column
           cout << "F!" << endl;
        else if ( differ( n, ( n - 1 ) ) ) //no path to left
           cout << "|";    //draw wall to left
        else
           cout << " ";    //draw space to indicate open passage left
        
                
    }
}
//****************************end*********************************//

//****************void Gentree::MakeMaze()************************//
void Gentree::MakeMaze(Gentree* gt, int rows, int columns )
{ 
  PRINT(rows, columns);
  int sz = rows * columns;
  cout << endl << "rows: " << rows << " columms:" << columns << endl;
  cout << "total size: " << sz << endl;
  while ( sz > 2 )
      {
           int n, n2;
           n = 1+(int)(((float)(size-1))*rand()/(RAND_MAX+1.0));
           n2 = 1+(int)(((float)(size-1))*rand()/(RAND_MAX+1.0));
           if ( differ ( n, n2 ) )
           {
                UNION ( n, n2 );
                sz--;
           }
           /*
           int n;
           n = 1+(int)(((float)(sz-1))*rand()/(RAND_MAX+1.0));
           if ( ( n - columns ) < 0 )    //random is in first row, don't check up
           {
              if ( n == 1 )          //starting point, don't check to left
              {
                 if ( differ( n, n + 1 ) )            //cell to the right
                    UNION( n, n+1 );
                 else if ( n + columns <= sz ) //not in last row, make bottom comparison
                      {
                           if ( differ( n, n + columns ) )//cell below
                              UNION( n, n + columns );
                      }
              }
              else                      //not starting point, check left
              {
                   if ( differ( n, n - 1 ) )
                      UNION( n, n - 1 );
              }
           }
           else                         //not in first row, check above
           {
              if ( differ( n, n - columns ) )
                      UNION( n, n - columns );
           }
           */ 
      }
}
//****************************end*********************************//
