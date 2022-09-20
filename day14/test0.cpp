/***************************************************
Print town names from census data
***************************************************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  // Open census data file
  ifstream fin("tempdata");
  
  // Read in (and ignore!) header information

  // Loop over each row
  {    
    /***** Process row **************/
    // Read (and ignore) 7 entries
    string s;
    fin >> s >> s >> s >> s >> s >> s >> s;

    // Read name of city/town/CDP/village
    string t;
    fin >> t;

    // Print name if town
    string r;
    fin >> r;
    if (r == "town")
      cout << t << endl;
  }

  return 0;
}

