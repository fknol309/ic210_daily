nt i = 0; i < 5; i #include <iostream>
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
output: new balance (double

side effects: 
    ask the user which action (withdraw or deposit)
    ask the user for amount
**********************************************/
double transaction (double B) {
    string action;

    cout << "withdraw or deposit: ";
    cin >> action;

    cout << "amount: ";
    cin >> amt;

    // conditional
    if (action == "withdraw") {
        B = B - amt;
    }
    else {
        B = B + amt;
    }

    return B;
}




/*********************************************
function: rate
input: current balance (double)
output: rate of interest (double)
*********************************************/
double rate(double B) {
    double r;
    r = 3 + (int)B/1000*(.5);
    return r;
}


/*********************************************
function: compound
input: rate
output: amount dollar is at end
*********************************************/
double compound (double rate) {
    double amt;
    double r = rate/100;
    for (int i = 0; i < 12; i++){
        amt = amt + amt*r/12
    }
    return amt;
}



















