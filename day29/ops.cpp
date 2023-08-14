#include <iostream>
#include <cinttypes>
using namespace std;

struct point {
    double x;
    double y;
};

point operator+(point a, point b) {
    point r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;

    return r;
}

int main() {
    point a = {1,1};
    point b = {2,2};
    point r = a + b;
    cout << r.x << r.y << endl;

    return 0;
}
