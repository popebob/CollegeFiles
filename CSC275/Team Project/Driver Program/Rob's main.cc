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




//#include "stdafx.cpp"        //<- MS Developer Studio requires you to uncomment this.
#include <iostream>
#include <fstream>

#include <cctype>
#include <string>

#include "./src/indexlist.cc"
#include "./src/searchlist.cc"


using std::cin;
using std::cout;
using std::string;

string lc(const string);
string cw(string);

int main()
{
//============      Class Setup Sys     ============

  indexlist index;

//============    Varible System Init   ============
  unsigned int page=0;
  string hold;
  ifstream vin;

  cout<<"Please input the book filename:> ";
  cin >>hold;
  cout<<endl<<"Input file varible set:> "<<hold<<endl<<endl;

  vin.open (hold.c_str());

  cout<<"Please input the skip words list:> ";
  cin >>hold;
  cout<<endl<<"Input file varible set:> "<<hold<<endl<<endl; 


//============      Main System Input     ==========

  SearchList search(hold); // Populates vector skip with data from string value

  if(!vin ||vin.fail())
    exit(1); // Kill application if specifed file does not exist
  else
    {
      while (!vin.eof())
        {
          vin>>hold;
          if (lc(hold.substr(0, 1)) == "#p")
            page++;
          else
            if (!search.is_entry(lc(hold)))
              index.insertNode(cw(lc(hold)), page);
        }
    }
  vin.close();
  index.displayList();

  cout<<endl;


  return 0;
}



string 
lc(const string key)
{
  //Pre:  Value inputed is a string
  //Post: String inputed value is made full lower case
  
  string newName=key;
  for (unsigned int i=0; i<key.length(); i++)
    newName[i]=tolower(key[i]);  // Switches string KEY to full lowercase
  return newName;
}

// Strips Punctuation from book
string cw(string key)
{
  //Pre:  Book vector holds data
  //Post: Punctuation is removed from all strings in vector book
  //Note: Current function has issues with special characters in the middle of string value.

  for (unsigned int z=0; z<key.length(); z++)
    {
      for (unsigned int j=0; j<65; j++)
        if ((key[z]==char(j)) && j!=39 && j!=45 )
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
    }
  return key;
}
