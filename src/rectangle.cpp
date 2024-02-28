#include "rectangle.h"

#include <vector>

using namespace std;

void Rectangle::addPoints(vector<Point>& points, const Line& line) const
{
    vector<Point> linePoints = line.getPoints();
    points.insert(points.end(), linePoints.begin(), linePoints.end());
}

Rectangle::Rectangle(const Point& _topLeft, const Point& _bottomRight) :
    topLeft(_topLeft),
    bottomRight(_bottomRight),
    topRight(Point(_bottomRight.getX(), _topLeft.getY())),
    bottomLeft(Point(_topLeft.getX(), _bottomRight.getY()))
{
}

const vector<Point> Rectangle::getPoints() const
{
    vector<Point> points;
    addPoints(points, Line(topLeft, topRight));
    addPoints(points, Line(bottomLeft, bottomRight));
    addPoints(points, Line(topLeft, bottomLeft));
    addPoints(points, Line(topRight, bottomRight));
    return points;
}

float Rectangle::getArea() const
{
    int width = topRight.getX() - topLeft.getX() + 1;
    int height = topLeft.getY() - bottomLeft.getY() + 1;
    return width * height;
}
