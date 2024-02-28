#include "canvas.h"

#include <iostream>

using namespace std;

Canvas::Canvas(int width, int height, string author) : AbstractGrid(width, height)
{
    this->author = author;
}

void Canvas::draw() const {
    AbstractGrid::draw();
    cout << "Author: " << author << endl;
}

void Canvas::addShape(const shared_ptr<AbstractShape> shape) {
    shapes.push_back(shape);
}

const vector<Point> Canvas::getPoints() const {
    vector<Point> allPoints;
    for (int i = 0; i < shapes.size(); i++) {
        vector<Point> points = shapes[i]->getPoints();
        allPoints.insert(allPoints.end(), points.begin(), points.end());
    }
    return allPoints;
}

float Canvas::getPaintNeeded() const {
    float totalPaint;
    for (int i = 0; i < shapes.size(); i++) {
        totalPaint += shapes[i]->getArea();
    }
    return totalPaint;
}
