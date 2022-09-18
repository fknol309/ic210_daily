#include <iostream>
using namespace std;


int main() {
    int next, sum = 0;
    char op;

    cin >> next >> op;
    sum = next;

    while (op != '=') {
        cin >> next >> op;
        sum += next;
    }

    cout << sum << endl;

    return 0;
}


/*
int main() {
    int next, sum = 0;
    char op = 'x';

    while (op != '=') {
        cin >> next >> op;
        sum += next;
    }

    cout << sum << endl;

    return 0;
}
*/

/*
int main() {

    int next, sum = 0;
    char op;

    do {
        cin >> next >> op;
        sum += next;
    } while ( op != '=');

    cout << sum << endl;

    return 0;
}

*/
