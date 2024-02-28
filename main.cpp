#include "canvas.h"
#include "circle.h"
#include "line.h"
#include "point.h"
#include "rectangle.h"

#include <iomanip>
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    const int CANVAS_SIZE = 50;
    const int CANVAS_MAX_X = CANVAS_SIZE - 1;
    const int CANVAS_MAX_Y = CANVAS_SIZE - 1;
    
    Canvas canvas(CANVAS_SIZE, CANVAS_SIZE, "Trevor Harmon");
    canvas.addShape(make_shared<Line>(Point(0, 0), Point(CANVAS_MAX_X, CANVAS_MAX_Y)));
    canvas.addShape(make_shared<Line>(Point(0, CANVAS_MAX_Y), Point(CANVAS_MAX_X, 0)));
    canvas.addShape(make_shared<Circle>(Point(CANVAS_SIZE / 2, CANVAS_SIZE / 2), 20));
    canvas.addShape(make_shared<Rectangle>(Point(0, CANVAS_MAX_Y), Point(CANVAS_MAX_X, 0)));
    canvas.draw();
    
    cout << "Paint needed: " << fixed << setprecision(1) << canvas.getPaintNeeded() << endl;
    
    return 0;
}
