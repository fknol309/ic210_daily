#include <iostream>
using namespace std;

int main() {
    int n=1;

    int *A = new int[n];
    int *B = new int[n];

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    for (int i = 0; i < n; i++){
        cin >> B[i];
    }


    for (int i = 0; i < n; i++){
        cout << A[i];
    }

    for (int i = 0; i < n + 1; i++){
        cout << B[i];
    }




    return 0;
}
