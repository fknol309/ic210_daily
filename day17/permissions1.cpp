#include <iostream>
using namespace std;

void get_permissions(int, int&, int&, int&);

int main() {

    char num0, num1, num2;
    int bit2, bit1, bit0;

    cout << "Permissions: ";
    cin  >> num0 >> num1 >> num2;

    // User Permissions  
    get_permissions ((int) num0, bit2, bit1, bit0);
    cout << "User" << endl
         << "read    " << bit2 << endl
         << "write   " << bit1 << endl
         << "execute " << bit0 << endl
         << endl;

    // Group Permissions
    get_permissions ((int) num1, bit2, bit1, bit0);
    cout << "Group" << endl
         << "read    " << bit2 << endl
         << "write   " << bit1 << endl
         << "execute " << bit0 << endl
         << endl;

    // Other Permissions
    get_permissions ((int) num2, bit2, bit1, bit0);
    cout << "Other" << endl
         << "read    " << bit2 << endl
         << "write   " << bit1 << endl
         << "execute " << bit0 << endl
         << endl;

    return 0;
}


void get_permissions (int num, int& bit2, int& bit1, int& bit0) {
    num -= 48;
    
    bit2 = num/4;
    num %= 4;
    bit1 = num/2;
    num %= 2;
    bit0 = num;
}




