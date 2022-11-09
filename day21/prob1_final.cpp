#include <iostream>
using namespace std;

/* Prototype */
void get_stats(double *A, int n);
void print_pretty(double *A, double *diffs, int n);
void hist(double *A, int n);


int main() {
    // read size n, allocate array of n doubles, read values into array
    int n;
    cin >> n;

    // ensure n > 0
    while (n <= 0){
        cin >> n;
    }

    // create array of size n
    double *A = new double[n];

    // read in values from terminal
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // find minimum, maximum, average
    get_stats(A, n);

    // calculate counts of values
    // print histogram values
    hist(A, n);

    // create and print array of differences (A[i] - A[i-1])    
    // of consecutive elements
    double *diffs = new double[n-1];
    for (int i = 0; i < n-1; i++){
        diffs[i] = A[i+1] - A[i];
    }  
    // print out diffs and array elements
    // 3  5  -1
    // \_/ \_/
    //  2  -6
    print_pretty(A, diffs, n);

    return 0;
}

void get_stats(double *A, int n) {
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
    cout << "max: " << max << endl;
    cout << "avg: " << sum/n << endl;
}

void print_pretty(double *A, double *diffs, int n){
    cout << "----- Differences ------" << endl;
    for (int i = 0; i < n; i++){
        cout << A[i] << "  ";
    }
    cout << endl;
    for (int i = 0; i < n-1; i++){
        cout << "\\_/";
    }
    cout << endl;
    cout << " ";
    for (int i = 0; i < n-1; i++){
        cout << diffs[i] << "  ";
    }
    cout << endl;
}

void hist(double *A, int n) {
    double *values_seen = new double[n];
    double *counts = new double[n];
    // initialize counts to 0
    for (int i = 0; i < n; i++) {
        counts[i] = 0;
        values_seen[i] = 0;
    }
    int num_new = 0;
    for (int i = 0; i < n; i++) {
        bool seen = 0;
        // is A[i] in the array values seen?
        for (int j = 0; j < num_new ; j++){
            if (A[i] == values_seen[j]) {   
                counts[j] += 1;
                seen = 1;
                break;
            }    
        }
        // if A[i] has not yet been seen,
        // add to the array values_seen
        if (!seen) {
            values_seen[num_new] = A[i];
            counts[num_new] = 1;
            num_new ++;
        }        
    }
    cout << "----- Histogram ------" << endl;
    for (int i = 0; i< num_new; i++){
        cout << values_seen[i] << ": " << counts[i] << endl;
    }
    cout << endl << endl;
}

