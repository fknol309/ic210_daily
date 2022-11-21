#include <iostream>
using namespace std;

//point.h
#ifndef POINTHEADER
#define POINTHEADER
// structs
struct point
{
  double x, y;
};

// function prototypes
istream& operator>>(istream&,point&);
#endif
