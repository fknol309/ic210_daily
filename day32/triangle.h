//triangle.h
#include "point.h"
struct triangle
{
  point vertex[3];
};
istream& operator>>(istream&,triangle&);
