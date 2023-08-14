/************************************************
 ** Use the debugger to step through this program
 ** and figure out what (if any) useful work the
 ** mystery function accomplishes.
 ************************************************/
#include <iostream>
using namespace std;

int mystery(int);

int main()
{
  cout << mystery(5) << endl;
  return 0;
}

int mystery(int k)
{
  if (k <= 0)
    return 0;

  int t = mystery(k - 1);

  int ans = k + t;

  return ans;
}

