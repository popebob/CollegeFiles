/***********
Cody Adams
CSC375-01 prog03
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
prog03.cpp  --  UI source
***********/

#include <list>
#include <iostream>
#include <fstream>
#include "Huffman.cpp"
#include "Tree.cpp"

//#include "HuffmanTree.cpp"

using namespace std;

//it buffers the file and prevents additional disk accesses, may increase RAM req.

//****************************int_main()**************************//
int main(int argc, char *argv[])
{
    vector<string> codeVect;     //congruent to charVect, character-code pairs                     
    vector<char> charVect;       // can be addressed with same index
    vector<char> inputVect;      //saves from reading file twice
    string outputStr;
    list<Huffman> huffList;      //class-member list for frequency information
    char input;                  //char to allow work with data from infile
    node * huffTree;             //root node
    cin >> noskipws;             // Stops all further whitespace skipping
    ifstream infile;
    infile.open ( argv[1] );     // open file
    if ( ( infile.is_open() ) && ( argc > 2 ) )    // file opened, valid number
    {                                                 // of parameters
       cout << endl << "Processing input file: " << argv[1] << ".  Please wait--";
       while ( infile.get(input) )  // read values, process if OK
       {
             inputVect.push_back(input);        //push to char list for output 
             frequ(huffList, input);          //built char. list w/ freq.           
       }
    huffList.sort();                 //std::sort uses overloaded <
    huffTree = buildTree( huffList );
    cout << "done." << endl; 
    } 
    else                         // file not opened or
    {                               // not enough parameters
         if (argc == 3)          // bad file specified
            cout << "Unable to open file: " << argv[1] << ".  Quitting...";
         else                                      // not enough parameters 
             cout << "ERROR" << endl << "Invalid run-time parameter(s).  " <<
                  "You typed:" << endl << argv[0] << " " << argv[1] << " " 
                  << argv[2];
         return 0;                // quit
    }
    encodeTree( huffTree, "", codeVect, charVect );    //build code table
    for ( int n  = 0; n != inputVect.size(); n++)      //build outputstring
    {
        for ( int c = 0; c != charVect.size(); c++)
        {
            if ( inputVect[n] == charVect[c] )     
            {               
               outputStr = outputStr + codeVect[c];   
               }
        }
    }
    cout << endl;
    ofstream outfile;
    outfile.open ( argv[2] );     // open file
    if ( ( outfile.is_open() ) && ( argc > 2 ) )    // file opened, valid number
    {                                                 // of parameters
       cout << endl << "Writing output file: " << argv[2] << ".  Please wait--";
       outfile << outputStr;
       cout << "done." << endl;
    }
    else                         // file not opened or
    {                               // not enough parameters
         if (argc == 3)          // bad file specified
            cout << "Unable to write file: " << argv[2] << "; data lost!  "
                 << "Quitting...";
         else                    // not enough parameters 
             cout << "ERROR" << endl << "Invalid run-time parameter(s).  " <<
                  "You typed:" << endl << argv[0] << " " << argv[1] << " " 
                  << argv[2];
         return 0;                                 // quit
    }
    outfile.close();
    return 0;
}
//****************************end*********************************//
