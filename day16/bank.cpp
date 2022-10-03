#include <iostream>
using namespace std;

/**********************************************
                  Prototypes
**********************************************/
//TODO




/**********************************************
                Main Function
**********************************************/
int main() {
    // balance
    double B = 0.0;

    // simulate 5 years
    for (int i = 0; i < 5; i ++) {
        B = transaction(B);
        double r = rate(B);
        // compound r returns value of one dollar
        // after year of monthly compounded interest
        B = B*compound(r); 
    }

    // print out final balance
    cout << "Balance = "
         << B << endl;

    return 0;
}



//TODO

/*********************************************
function: transaction
input:
output: 

side effects: 


**********************************************/





/*********************************************
function: rate
input:
output: 
*********************************************/



/*********************************************
function: compound
input: 
output:
*********************************************/


