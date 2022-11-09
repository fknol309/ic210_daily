#include <iostream>
#include <cinttypes>
using namespace std;

/*****************************************
************    Structs   ****************
*****************************************/
struct point {
    double x;
    double y;
};

struct triangle {
    point a, b, c;
};

/*****************************************
************    Prototypes   *************
*****************************************/
point    midpt(point a, point b);
triangle mid_tri (triangle T);
void     print_point(point a);
void     print_tri(triangle T);


int main()
{
    // declare triangle -- creates boxes
    triangle A;
    // initialize triangle -- fill in boxes
    A.a.x = 0;
    A.a.y = 0;
    A.b.x = 0;
    A.b.y = 1;
    A.c.x = 1;
    A.c.y = 0;

    triangle M = mid_tri(A);
    print_tri(M); 

    return 0;
}

/*****************************************
************    Functions   **************
*****************************************/

// input: point a, point b
// returns: midpont of two points
point midpt(point a, point b) {
    point m;
    m.x = (a.x + b.x)/2;
    m.y = (a.y + b.y)/2;
    return m;
};

// input: triangle
// returns: the midpoint triangle
triangle mid_tri (triangle T){
    triangle M;    
    M.a = midpt(T.a, T.b);
    M.b = midpt(T.a, T.c);
    M.c = midpt(T.b, T.c);
    return M;
}

// print a point (x,y)
void print_point (point a){
    cout << "(" << a.x << ", " << a.y << ")";
}

// print triangle (a.x, a.y), (b.x, b.y), (c.x, c.y)
void print_tri(triangle T) {
    print_point(T.a);
    cout << " ";
    print_point(T.b);
    cout << " ";
    print_point(T.c);
    cout << endl;
}
