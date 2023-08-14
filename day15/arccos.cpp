#include <iostream>
#include <cmath>
using namespace std;


double get_angle(int adj, int hyp);

int main()
{
    int adj, hyp;
    cout << "Adjacent side of angle: ";
    cin >> adj;

    cout << "Hypotenuse of triangle: ";
    cin >> hyp;

    double angle = get_angle( adj, hyp);
    cout << "Angle is " << angle << endl;

    return 0;
}

double get_angle (int adj, int hyp) {
    double ans = acos((double) adj/hyp);
    return ans;
}
