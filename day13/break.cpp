#include <iostream>
using namespace std;

int main()
{
    int val; 
    int result = 0;
    char op;

    while (true) {
        cin >> val >> op;
        result = result + val;

        if (op == '+'){
            continue;
        }
        if (op == '='){
            break;
        }
    }
    cout << result << endl;

    return 0;
}
