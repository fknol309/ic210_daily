//triangle.cpp
#include "triangle.h"

istream& operator>>(istream& in, triangle& t){
  for(int i = 0; i < 3; i++)
    in >> t.vertex[i];
}
