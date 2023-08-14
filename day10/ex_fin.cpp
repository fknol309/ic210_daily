#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("navyrules");
    if (fin){
        cout << "file already exists! Don't want to write over";
        return 1;
    }
    ofstream fout("navyrules");
    
    if (!fout) {
        cout << "file could not created" << endl;
        return 1;
    }   
 
    int i = 1;
    while (i <= 10) {
        fout << i << endl;
        i = i + 1;
    }

    fout.close();
    return 0;
}
