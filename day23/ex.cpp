#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int N;
    cout << "Enter number of files: ";
    cin >> N;

    ofstream *FILE = new ofstream[N];

    cout << "Please enter " << N << " filenames: ";
    for(int j = 0; j < N; j++)
    {
      string s;
      cin >> s;
      FILE[j].open(s);
    }
    for(int k = 0; k < N; k++) {
      FILE[k] << "Hello file number " << k << "!!!" << endl;  
      FILE[k].close();
    }

    return 0;
}
