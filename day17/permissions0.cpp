#include <iostream>
using namespace std;

int main() {
    char num0, num1, num2;
    int bit2, bit1, bit0;

    cout << "Permissions: " << endl;
    cin  >> num0 >> num1 >> num2;

    // User Permissions  
    num0 -= 48;
    
    bit2 = num0/4;
    num0 %= 4;
    bit1 = num0/2;
    num0 %= 2;
    bit0 = num0;
    
    cout << "User: \n"
         << "read    " << bit2 << "\n"
         << "write   " << bit1 << "\n"
         << "execute " << bit0  <<"\n"
         << "\n";

    // Group Permissions
    num1 -= 48;
    
    bit2 = num1/4;
    num1 %= 4;
    bit1 = num1/2;
    num1 %= 2;
    bit0 = num1;
    
    cout << "Group: \n"
         << "read    " << bit2 << "\n"
         << "write   " << bit1 << "\n"
         << "execute " << bit0  <<"\n"
         << "\n";
    
    // Other Permissions
    num2 -= 48;

    bit2 = num2/4;
    num2 %= 4;
    bit1 = num2/2;
    num2 %= 2;
    bit0 = num2;

    cout  << "Other: \n"
          << "read    " << bit2 << "\n"
          << "write   " << bit1 << "\n"
          << "execute " << bit0  <<"\n"
          << "\n";
 
    return 0;   
}
