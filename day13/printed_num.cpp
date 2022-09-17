#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double pi = M_PI;
    
    // printing only 5 decimals
    cout << pi << endl;

    // printing out the dictated 20 decimals
    cout << setprecision(20);
    cout << pi << endl;

    return 0;
}
