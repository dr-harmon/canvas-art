#pragma once

#include "point.h"
#include "shape.h"

#include <vector>

class Line : public AbstractShape {
    Point pt1, pt2;
public:
    Line(const Point& _pt1, const Point& _pt2);
    const std::vector<Point> getPoints() const;
};
