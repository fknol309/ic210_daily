#include <iostream>          
#include <unistd.h>          
using namespace std;         
                             
int main()                   
{                            
  for(int i = 0; i < 10; i++)
  {                          
    cout << '*' << flush;             
    sleep(1);                
  }                          
  cout << endl;              
  return 0;                  
}
