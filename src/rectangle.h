#pragma once

#include "line.h"
#include "point.h"
#include "shape.h"

#include <vector>

class Rectangle : public AbstractShape {
public:
    Rectangle(const Point& _topLeft, const Point& _bottomRight);
    const std::vector<Point> getPoints() const;
    float getArea() const;
};
