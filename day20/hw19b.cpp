#include <iostream>
using namespace std;

// prints if substring target found in test string
void find_substring(string target, string test) {
    for (int i = 0; i < test.length(); i++) {
        for (int j = 0; j < target.length(); j++) {
            if (target[j] != test[i+j]) {
                break;
            }
            // went through all letters of substring and found
            if (j == target.length() - 1) {
                cout << "The target " << target 
                     << " is a substring of the test string "
                     << test << "!" << endl;
                return;
            }
        }
    }
    // not found
    cout << "The target " << target 
         << " is not a substring of the test string "
         << test << "!" << endl;
   
    return;
}


int main() {
    string target, test;

    cout << "Enter target string: ";
    cin >> target;
    cout << "Enter test string: ";
    cin >> test;    

    find_substring(target, test);

    return 0;
}
