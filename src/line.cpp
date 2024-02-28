#include "line.h"

using namespace std;

Line::Line(const Point& _pt1, const Point& _pt2) : pt1(_pt1), pt2(_pt2)
{
}

const vector<Point> Line::getPoints() const
{
    vector<Point> points;

    int x1 = pt1.getX();
    int y1 = pt1.getY();
    int x2 = pt2.getX();
    int y2 = pt2.getY();

    int dx =  abs (x2 - x1), sx = x1 < x2 ? 1 : -1;
    int dy = -abs (y2 - y1), sy = y1 < y2 ? 1 : -1; 
    int error = dx + dy;
    int e2;

    while (true) {
      points.push_back(Point(x1, y1));
      if (x1 == x2 && y1 == y2) {
          break;
      }
      e2 = 2 * error;
      if (e2 >= dy) { error += dy; x1 += sx; }
      if (e2 <= dx) { error += dx; y1 += sy; }
    }

    return points;
}
