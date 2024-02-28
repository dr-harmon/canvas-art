#include "grid.h"

#include <iostream>

using namespace std;

AbstractGrid::AbstractGrid(int width, int height)
{
    this->width = width;
    this->height = height;
}

string AbstractGrid::getPixelAtPoint(int x, int y, const vector<Point>& points) const
{
    if (containsPoint(x, height - 1 - y, points)) {
        return "█";
    } else {
        return "░";
    }
}

void AbstractGrid::draw() const
{
    const vector<Point> points = getPoints();
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            cout << getPixelAtPoint(x, y, points);
        }
        cout << endl;
    }    
}

bool AbstractGrid::containsPoint(int x, int y, const vector<Point>& points) const
{
    for (int i = 0; i < points.size(); i++) {
        if (points[i].getX() == x && points[i].getY() == y) {
            return true;
        }
    }
    return false;
}

const vector<Point> AbstractGrid::getPoints() const
{
    return vector<Point>();
}
