#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Guess a number between 1 and 10: ";
    cin >> n;
    int y = 4;

    while (n = 0 || n*y < 10){
        cout << "Guess a number between 1 and 10: ";
        cin >> n;
    }

    return 0;
}
