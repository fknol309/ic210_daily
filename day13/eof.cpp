#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open file stream
    ifstream FIS("Input");

    // Read char c until the end of file
    int count = 0;
    for (char c = FIS.get(); !FIS.eof(); c = FIS.get()) {
    count++;
    }

    cout << "There were " << count << " characters!" << endl;

    return 0;
}
