#pragma once

#include "point.h"
#include "shape.h"

#include <vector>

class Circle : public AbstractShape {
    Point center;
    int radius;
public:
    Circle(const Point& _center, int _radius);
    const std::vector<Point> getPoints() const;
    float getArea() const;
};
