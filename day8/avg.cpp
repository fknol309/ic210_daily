#include <iostream>
using namespace std;

int main()
{
    //declare variables
    int count, sum, k;
    sum = 0;

    cin >> k;

    while (k >= 0){
        sum = sum + k;
        count = count + 1;
        cin >> k;
    }
    cout << "sum is " << sum << endl;
    if (count == 0){
        count = 1;
    }
    cout << "avg is " << (double) sum /count << endl;


    return 0;
}
