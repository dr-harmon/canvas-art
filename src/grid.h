#pragma once

#include <string>
#include <vector>

#include "point.h"

class AbstractGrid {
    int width;
    int height;
protected:
    std::string getPixelAtPoint(int x, int y, const std::vector<Point>& points) const;
    bool containsPoint(int x, int y, const std::vector<Point>& points) const;
    virtual const std::vector<Point> getPoints() const;
public:
    AbstractGrid(int width, int height);
    void draw() const;
};
