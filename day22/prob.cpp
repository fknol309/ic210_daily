#include <iostream>
using namespace std;

/*****************************
*******   Prototype   ******** 
******************************/
void find_stats(double *, int);
void print_pretty(double *B, double *diffs, int m);


int main() {
    // read size n, allocate array of n doubles, read values into array
    int n;
    cin >> n;

    // Check n>0
    while (n <=0 ) {
        cin >> n;
    }

    // create array of size n
    double *A;
    A = new double[n];

    // read in values from terminal
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // find minimum, maximum, average
    find_stats(A, n);

    // calculate counts of values


    // create and print array of differences (A[i] - A[i-1])    
    // of consecutive elements
    double *diffs = new double[n-1];
    for (int i = 0; i < n-1; i++) {
        diffs[i] = A[i+1] - A[i];
        cout << diffs[i] << endl;
    }
    
    // print out diffs and array elements
    // 3  5  -1
    // \_/ \_/
    //  2  -6
    print_pretty(A, diffs, n);



    return 0;
}

/******************************
*******    Functions    *******
*******************************/

// print stats from data
void find_stats(double *A, int n) {
    // find minimum, maximum, average
    double min = A[0];
    double max = A[0];
    double sum = A[0];
    for (int i = 1; i < n; i++){
        if (A[i] < min) {
            min = A[i];
        }
        if (A[i] > max) {
            max = A[i];
        }

        sum += A[i];
    }
    cout << "min: " << min << endl;
    cout << "max: " << max<< endl;
    cout << "avg: " << sum/n << endl;
}

// function to print the differences "pretty"
void print_pretty(double *A, double *diffs, int n) {

    for (int i = 0; i < n; i++){
        cout << A[i] << "  ";
    }
    cout << endl;

    for (int i = 0; i < n-1; i++){
        cout << "\\_/";
    }
    cout << endl;
    
    cout << " ";
    for (int i = 0; i < n; i++){
        if (diffs[i] >=10 || diffs[i] < 0) {
            cout << diffs[i] << " ";
        }
        else {
            cout << diffs[i] << "  ";
        }
    }
    cout << endl;

}
