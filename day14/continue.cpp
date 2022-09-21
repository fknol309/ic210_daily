#include <iostream>
using namespace std;

int main()
{
    int num;
    char op;
    while (true) {
        cin >> num >> op;
        if (op == '+'){
            continue;
        }
        else if (op == '=')
        {
            break;
        }
        cout << "end of while" << endl;
    }
    return 0;
}
