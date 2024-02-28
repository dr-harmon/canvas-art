#pragma once

#include "grid.h"
#include "point.h"
#include "shape.h"

#include <memory>
#include <string>
#include <vector>

class Canvas : public AbstractGrid {
    std::string author;
    std::vector< std::shared_ptr<AbstractShape> > shapes;
public:
    Canvas(int width, int height, std::string author);
    void draw() const;
    void addShape(const std::shared_ptr<AbstractShape> shape);
    const std::vector<Point> getPoints() const;
    float getPaintNeeded() const;
};
