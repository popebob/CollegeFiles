//main.cc
//

    /*------------------------------------------------------------------
     *                  ____  ____    __    __  __                      *
     *                 (_  _)( ___)  /__\  (  \/  )                     *
     *                   )(   )__)  /(__)\  )    (                      *
     *                  (__) (____)(__)(__)(_/\/\_)                     *
     *         __   ____   __    ____    __    _  _  ____    __         *
     *        /__\ (_  _) /__\  (  _ \  /__\  ( \/ )(_  _)  /__\        *
     *       /(__)\  )(  /(__)\  )   / /(__)\  )  (  _)(_  /(__)\       *
     *      (__)(__)(__)(__)(__)(_)\_)(__)(__)(_/\_)(____)(__)(__)      *
     *                                                                  *
     *    Team Information                                              *
     *                                                                  *
     *     |      Name        |          Responcibilites        |       *
     *     |------------------|---------------------------------|       *
     *     |  Robert Knuuti   |         (main, IndexList)       |       *
     *     |  Scott Wolforth  |            (SearchList)         |       *
     *     |  Cody Adams      |              (PageQ)            |       *
     *                                                                  *
     *------------------------------------------------------------------*/

/*#######################################################################################*/
/*####################                                               ####################*/
/*##################                       NOTE!!                      ##################*/
/*####################                                               ####################*/
/*#######################################################################################*/
/*                                                                                       */
 /*  All code comments are located in their respective funciton headers, and inside the *
  *+ the quicknote text file.                                                           *
  *                                                                                     *
  *#####################################################################################*/




//#include "stdafx.cpp"         //<- MS Developer Studio requires you to uncomment this.
#include <iostream>
#include <fstream>

#include <cctype>
#include <string>

#include "./src/indexlist.cc"   //note that this is a local subdirectory
#include "./src/searchlist.cc"  //note that this is a local subdirectory


using std::cin;
using std::cout;
using std::string;

string lc(const string);
// Function analizes inputed string value on a per character basis, and changes
// + each character to lower case using the tolower() from cctype header file.

//PRE:  A valid string is taken in (Not a cstring)
//POST: Fuction returns a lower case version of inputed string

string cw(string);
// Function analizes inputed string value on a per character basis, and cleans
//+ the string of all special characters, exempt the hyphen and single quote/apostrophe.
//+ Take note that this cleaning only works if the punctuation occurs only at the end of
//+ a word.  Otherwise, the special character is removed and the string grows smaller.
//+ Ex.  STL:Concept becomes STLConcept

//PRE:  STL string object is taken in
//POST: String has all special characters removed.

int main()
{
//============      Our Identity        ============

  cout<<"\n\n\n     *------------------------------------------------------------------"<<endl
      <<"     *                  ____  ____    __    __  __                      *"<<endl
      <<"     *                 (_  _)( ___)  /__\\  (  \\/  )                     *"<<endl
      <<"     *                   )(   )__)  /(__)\\  )    (                      *"<<endl
      <<"     *                  (__) (____)(__)(__)(_/\\/\\_)                     *"<<endl
      <<"     *         __   ____   __    ____    __    _  _  ____    __         *"<<endl
      <<"     *        /__\\ (_  _) /__\\  (  _ \\  /__\\  ( \\/ )(_  _)  /__\\        *"<<endl
      <<"     *       /(__)\\  )(  /(__)\\  )   / /(__)\\  )  (  _)(_  /(__)\\       *"<<endl
      <<"     *      (__)(__)(__)(__)(__)(_)\\_)(__)(__)(_/\\_)(____)(__)(__)      *"<<endl
      <<"     *                                                                  *"<<endl
      <<"     *    Team Information                                              *"<<endl
      <<"     *                                                                  *"<<endl
      <<"     *     |      Name        |          Responcibilites        |       *"<<endl
      <<"     *     |------------------|---------------------------------|       *"<<endl
      <<"     *     |  Robert Knuuti   |         (main, IndexList)       |       *"<<endl
      <<"     *     |  Scott Wolforth  |            (SearchList)         |       *"<<endl
      <<"     *     |  Cody Adams      |              (PageQ)            |       *"<<endl
      <<"     *                                                                  *"<<endl
      <<"     *------------------------------------------------------------------*"<<endl<<endl;



//============    Varible System Init   ============

  indexlist index;

  unsigned int page=0;
  string hold;
  ifstream vin;

  cout<<"Please input the book filename:> ";
  cin >>hold;
  cout<<"Program 'Book' input file varible set to:> "<<hold<<endl<<endl;

  vin.open (hold.c_str());  //eliminate the need of another string varible; save memory

  cout<<"Please input the skip words list:> ";
  cin >>hold;
  cout<<"Program 'Skip Word' input file varible set to:> "<<hold<<endl<<endl; 


//============      Main System Input     ==========

  SearchList search(hold); // Populates vector skip with data from string value

  if(!vin ||vin.fail())
    {
      cout<<"Input file for Book cannot be found.  Exiting program...\n\n\n";
      exit(1); // Kill application if book file does not exist
    }
  else
    {
      while (!vin.eof())                             // Rather than populating the entire list, this section
        {                                            //+ preforms it's addition to the booklist one pass at a
          vin>>hold;                                 //+ time.  It then checks if the page is incremented.  If
          if ((hold[0] == '#') && (hold[1] == 'P'))  //+ it has, then PAGE increases value by 1.  Then preform
            page++;                                  //+ the searchlist's function to test if the inputed string
          if (!search.is_entry(lc(hold)))            //+ is a part of the skip list.  If not, then test if it is
            if (cw(lc(hold)) != "")                  //+ a null string.  If not, then preform the function indexNode
              index.insertNode(cw(lc(hold)), page);  //+ to add the word to the index, or add the page number of the
        }                                            //+ already existing word.
    }
  vin.close();                // Close input stream
  ofstream vout;              // Open an output stream
  vout.open("out.txt");       // Output filename
  index.displayList(vout);    // Printout the indexed list and pages with the passed stream varible
  vout.close();               // Close output stream

  cout<<endl;


  return 0;
}



string 
lc(const string key)
{
// Function analizes inputed string value on a per character basis, and changes
// + each character to lower case using the tolower() from cctype header file.

//PRE:  A valid string is taken in (Not a cstring)
//POST: Fuction returns a lower case version of inputed string
  
  string newName=key;
  for (unsigned int i=0; i<key.length(); i++)
    newName[i]=tolower(key[i]);  // Switches string KEY to full lowercase
  return newName;
}

// Strips Punctuation from book
string cw(string key)
{
// Function analizes inputed string value on a per character basis, and cleans
//+ the string of all special characters, exempt the hyphen and single quote/apostrophe.
//+ Take note that this cleaning only works if the punctuation occurs only at the end of
//+ a word.  Otherwise, the special character is removed and the string grows smaller.
//+ Ex.  STL:Concept becomes STLConcept

//PRE:  STL string object is taken in
//POST: String has all special characters removed.

  for (unsigned int z=0; z<key.length(); z++)
    {
      for (unsigned int j=33; j<48; j++)
        if ((key[z]==char(j)) && j!=39 && j!=45)
          {
            key.replace(z, 1, "");
            z--;
          }

//  comment out for including numerics.
      for (unsigned int j=48; j<58; j++)
        if (key[z]==char(j))
          {
            key.replace(z, 1, "");
            z--;
          }

      for (unsigned int j=58; j<65; j++)
        if (key[z]==char(j))
          {
            key.replace(z, 1, "");
            z--;
          }

      for (int j=91; j<97; j++)
        if (key[z]==char(j))
          {
            key.replace(z, 1, "");
            z--;
          }
      for (int j=123; j<126; j++)
        if (key[z]==char(j))
          {
            key.replace(z, 1, "");
            z--;
          }
    }
  return key;
}
