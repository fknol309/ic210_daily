#include <iostream>
using namespace std;

int main()
{
    int days;
    int year, month;
    cin >> month >> year;

    switch(month)
    {      
        // if month is 1,3,5,7,10,12 then days=31                    
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        // if month is 2, then check if leap year
        case 2:
            if (year % 4 == 0 && (year%100 != 0 || year%400 == 0)) {
                days = 29;
            }
            else {
                days = 28;
            }
            break;
        // otherwise, days=30
        default:
            days = 30;
            break;
    }
    
    cout << days << endl;

    return 0;
}
