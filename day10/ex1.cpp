#include <iostream>
using namespace std;

int main()
{
    /*
    int j, k;
    k = 0;
    cin >> j;

    while (cin) {
        k = k + j;
        cin >> j;
    }
    */

    int j, k;
    k = 0;
    while(cin >> j)
    {
      k = k + j;  
    }

    cout << k << endl;

    return 0;
}
