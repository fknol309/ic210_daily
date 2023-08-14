#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int k = 4;
    int f = factorial(4);
    cout << f << endl;

    return 0;
}


int factorial(int n) {
  if (n == 1)                
    return 1;                
  else                       
    return n * factorial(n-1);
}

