#include <iostream>
using namespace std;

void print_permissions(string, istream&);

int main() {

    char num0, num1, num2;

    cout << "Permissions: " << endl;

    // User Permissions  
    print_permissions ("User", cin);

    // Group Permissions
    print_permissions ("Group", cin);

    // Other Permissions
    print_permissions ("Other", cin);

    return 0;
}


void print_permissions (string s, istream& cin) {
    char num;
    cin >> num;
    num -= 48;

    // grab the 3 bits making up the number    
    int bit2 = num/4;
    num %= 4;
    int bit1 = num/2;
    num %= 2;
    int bit0 = num;

    // print out the 3 bits
    cout << s << endl
         << "read    " << bit2 << endl
         << "write   " << bit1 << endl
         << "execute " << bit0 << endl
         << endl;
}




