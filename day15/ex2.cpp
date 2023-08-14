#include <iostream>
#include <cinttypes>
using namespace std;


int factorial( int x ){

    int result = 1;
    while (x > 0){
        result = result * x;
        x --;
    }

    return result;
}

int main()
{
    int x = 5;
    int result = factorial(x);

    cout << result << endl;
    cout << "x: " << x << endl;

    return 0;
}
