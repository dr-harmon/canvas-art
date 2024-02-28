#pragma once

#include "point.h"

#include <vector>

class AbstractShape {
public:
    virtual const std::vector<Point> getPoints() const;
    virtual float getArea() const;
};
