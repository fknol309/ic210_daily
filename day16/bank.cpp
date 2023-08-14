#include <iostream>
using namespace std;

/**********************************************
                  Prototypes
**********************************************/
//TODO
double transaction(double);
double rate(double);
double compound(double);


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
input: current balance (double)
output: new balance (double)

side effects: 
    asking user for action (withdraw or deposit)
    asking user for amount
**********************************************/
double transaction (double B) {
    string action;
    double amount;

    // ask user for action
    cout << "action (withdraw or deposit): ";
    cin  >> action;

    // ask user for amount
    cout << "amount: ";
    cin  >> amount;

    // add or take away from B
    if (action == "withdraw") {
        B -= amount;
    }
    else {
        B += amount;
    }

    return B
}





/*********************************************
function: rate 
input: B (double)
output: new rate (double)
*********************************************/
double rate (double B) {
    double r = 3 + ((int)B/1000)(.5);
    return r;
}


/*********************************************
function: compound
input: r
output: how much 1$ increased
*********************************************/
double compound (double r) {
    double total = 1.0;
    double r_perc = r/100;
    for (int i = 0; i < 12; i++){
        total = r_perc/12*total + total;
    }
    return total;
}





