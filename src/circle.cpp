#include "circle.h"

#include <math.h>
#include <vector>

using namespace std;

Circle::Circle(const Point& _center, int _radius) : center(_center), radius(_radius)
{
}

const vector<Point> Circle::getPoints() const
{
    vector<Point> points;

    int x0 = center.getX();
    int y0 = center.getY();
    int x = 0;
    int y = radius;
    int error = 1 - radius;

    do {
        points.push_back(Point(x0 + x, y0 + y));
        points.push_back(Point(x0 + y, y0 + x));
        points.push_back(Point(x0 - y, y0 + x));
        points.push_back(Point(x0 - x, y0 + y));
        points.push_back(Point(x0 - x, y0 - y));
        points.push_back(Point(x0 - y, y0 - x));
        points.push_back(Point(x0 + y, y0 - x));
        points.push_back(Point(x0 + x, y0 - y));

        if (error < 0) {
            error += (2 * x) + 1;
        } else {
            y--;
            error += (2 * x) - (2 * y) + 1;
        }
        x++;
    } while (y > x);

    return points;
}

float Circle::getArea() const
{
    return M_PI * radius * radius;
}
