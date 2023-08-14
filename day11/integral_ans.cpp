/***************************************************
Integration of f(x) by simple end-point approximation

Write a program that will approximate the integral of 

   f(x) = (x*sin(x) - 1)*log(x),

where "log" is the natural logarithm. The bounds of
integration should be supplied by the user, as well
as the number of rectangles used in the approximation.
We'll discuss the simple approximation scheme we'll
use in class.

Note:  The integral of f(x) from 2.5 to 3.5 is
approximately -0.8147741401.

Note:  Both log() and sin() are functions in cmath.
***************************************************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  // Read a and b
  double a, b;
  char c;
  cout << "Enter integrations bounds (a,b): ";
  cin >> c >> a >> c >> b >> c;

  // Read n
  int n;
  cout << "Enter n, the number of steps: ";
  cin >> n;

  // Compute width of rectangles
  double w = (b - a)/n;

  // Initialize integral value I to zero
  double I = 0.0;

  // L O O P !
  for(int i = 0; i < n; i++)
  {
    // Compute evaluation point x
    double x = a + i*w;

    // Compute fucntion value at x
    double fx = (x*sin(x) - 1) * log(x);

    // Add area of rectangle to I
    I = I + fx * w;
  }

  // Write out answer
  cout << "Integral is approximately: "
       << I << endl;

  return 0;
}

