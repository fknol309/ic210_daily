//point.cpp
#include "point.h"
#include <iostream>
#include <fstream>
using namespace std;

istream& operator>>(istream& in, point& p){
  char c;
  in >> c >> p.x
     >> c >> p.y >> c;  
  return in;
}
