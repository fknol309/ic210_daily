/*
Read in tempdata and print town to file
also, find average population
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // open census data file
    string filename = "tempdata";
    ifstream fin(filename);

    if (!fin) {
        cout << "File can not be read or does not exist" << endl;
        return 1; 
    }

    // try to read the file to be written to
    // check to see if file already exists
    string out_file = "output";
    ifstream fout_check(out_file);
    if (fout_check) {
        cout << "File already exists!!!!!" << endl;
        fout_check.close();
        return 1;
    }
    
    // create file to be written to
    // check to see if file was created
    ofstream fout(out_file);
    if (!fout) {
        cout << "File cannot be written to" << endl;
        return 1;
    }

    // read in (and ignore!) header information
    string junk;

    do {
        fin >> junk;
    } while (junk != "NAME");

    int total_pop = 0, count = 0;
    int pop1, pop2, pop;
    char comma;

    // loop over each row
    while (fin >> junk) {
        // process row
        fin >> junk >> pop1 >> comma;
        // if comma in pop, read in rest of pop
        if (comma == ','){
            fin >> pop2;
            pop = pop1*1000 + pop2;
        }

        // continue to read in junk
        fin >> junk >> junk >> junk >> junk;
    
        // add population 
        // find "," in pop number 
        total_pop += pop;
        count += 1;
           
        string town, t;
        fin >> t;
        town = t;
        while ( t != "village" && t != "CDP" && t != "town" && t != "city"){
            fin >> t;
            town = town + " " + t;
        }
        fout << town << endl;

    }
    fout << total_pop/count << endl;

    // close files
    fin.close();
    fout.close();

    return 0;
}






