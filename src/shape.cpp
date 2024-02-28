#include "shape.h"

using namespace std;

const vector<Point> AbstractShape::getPoints() const {
    return vector<Point>();
}

float AbstractShape::getArea() const {
    return 0;
}
