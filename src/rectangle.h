#pragma once

#include "line.h"
#include "point.h"
#include "shape.h"

#include <vector>

class Rectangle : public AbstractShape {
    Point topLeft;
    Point topRight;
    Point bottomLeft;
    Point bottomRight;
    void addPoints(std::vector<Point>& points, const Line& line) const;
public:
    Rectangle(const Point& _topLeft, const Point& _bottomRight);
    const std::vector<Point> getPoints() const;
    float getArea() const;
};
