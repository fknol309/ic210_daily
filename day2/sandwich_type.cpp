//sandwich_type.cpp
//Goal: ask user for sandwich type. Then print to screen
//”Your <sandwich_type> sandwich will cost $10”

#include <iostream>
using namespace std;

int main(){
    // declare variables
    string sandwich_type;

    // print sentence to command line
    cout << "What type of sandwich do you want (one word)? ";
    
    // user’s input is placed into number
    cin   >> sandwich_type;
    
    //
    cout << "Your " << sandwich_type << " sandiwch will cost $10" << endl;

    return 0;
}
