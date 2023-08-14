#include <iostream>
using namespace std;

void print_permissions(int, string);

int main() {

    char num0, num1, num2;

    cout << "Permissions: " << endl;
    cin  >> num0 >> num1 >> num2;

    // User Permissions  
    print_permissions ((int) num0, "User");

    // Group Permissions
    print_permissions ((int) num1, "Group");

    // Other Permissions
    print_permissions ((int) num2, "Other");

    return 0;
}


void print_permissions (int num, string s) {
    num -= 48;
    
    int bit2 = num/4;
    num %= 4;
    int bit1 = num/2;
    num %= 2;
    int bit0 = num;

    cout << s << endl
         << "read    " << bit2 << endl
         << "write   " << bit1 << endl
         << "execute " << bit0 << endl
         << endl;
}




