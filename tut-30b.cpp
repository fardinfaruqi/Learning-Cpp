#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend int distanceBetweenPoints(Point a, Point b);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is {" << x << ", " << y << "}" << endl;
    }
};

int distanceBetweenPoints(Point a, Point b)
{
    int distance = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    return distance;
}

int main()
{
    Point p(10, 12);
    p.displayPoint();

    Point q(1, 1);
    q.displayPoint();

    cout << "Distance between p & q is " << distanceBetweenPoints(p, q) << endl;

    return 0;
}