//main0.cpp
#include "point.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  point p;
  cin >> p;
  cout << "dist is " << sqrt(p.x*p.x + p.y*p.y) << endl;
  return 0;
}
