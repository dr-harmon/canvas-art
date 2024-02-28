# Canvas Art

In this lab you will create a virtual "canvas" on which to draw pixel art. You will use characters to represent "pixels" that will be streamed to the console. The requirements are:

* Using the `AbstractGrid`, `AbstractShape`, and `Point` classes provided, create an `AbstractGrid` subclass called `Canvas` that "paints" shapes. This subclass should:
    * Contain a string holding the author of the art
    * Contain a list of `AbstractShape` objects to be drawn on the canvas
    * Override the draw method to draw the grid followed by the name of the author
    * Contain a `getPaintNeeded` method that computes the amount of paint (in square "pixels") that would be needed if the canvas were painted in real life
* You should derive the following additional shape classes inherited from `AbstractShape`:
    * `Line`
    * `Circle`
    * `Rectangle`

When the program runs, it should print the following:

    ██████████████████████████████████████████████████
    ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██
    █░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░█
    █░░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░█
    █░░░█░░░░░░░░░░░░░░░███████████░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░███░░░░░░░░░░░███░░░░░░░░░░█░░░░█
    █░░░░░█░░░░░░░░██░░░░░░░░░░░░░░░░░██░░░░░░░█░░░░░█
    █░░░░░░█░░░░░██░░░░░░░░░░░░░░░░░░░░░██░░░░█░░░░░░█
    █░░░░░░░█░░░█░░░░░░░░░░░░░░░░░░░░░░░░░█░░█░░░░░░░█
    █░░░░░░░░█░█░░░░░░░░░░░░░░░░░░░░░░░░░░░██░░░░░░░░█
    █░░░░░░░░░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░██░░░░░░░░█
    █░░░░░░░░█░█░░░░░░░░░░░░░░░░░░░░░░░░░░█░░█░░░░░░░█
    █░░░░░░░█░░░█░░░░░░░░░░░░░░░░░░░░░░░░█░░░░█░░░░░░█
    █░░░░░░░█░░░░█░░░░░░░░░░░░░░░░░░░░░░█░░░░░█░░░░░░█
    █░░░░░░█░░░░░░█░░░░░░░░░░░░░░░░░░░░█░░░░░░░█░░░░░█
    █░░░░░░█░░░░░░░█░░░░░░░░░░░░░░░░░░█░░░░░░░░█░░░░░█
    █░░░░░█░░░░░░░░░█░░░░░░░░░░░░░░░░█░░░░░░░░░░█░░░░█
    █░░░░░█░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░░░░░░█░░░░█
    █░░░░░█░░░░░░░░░░░█░░░░░░░░░░░░█░░░░░░░░░░░░█░░░░█
    █░░░░█░░░░░░░░░░░░░█░░░░░░░░░░█░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░░░░█░░░░░░░░█░░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░░░░░█░░░░░░█░░░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░░░░░░█░░░░█░░░░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░░░░░░░█░░█░░░░░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░░░░░░░░██░░░░░░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░░░░░░░░██░░░░░░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░░░░░░░█░░█░░░░░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░░░░░░█░░░░█░░░░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░░░░░█░░░░░░█░░░░░░░░░░░░░░░░█░░░█
    █░░░░█░░░░░░░░░░░░░░█░░░░░░░░█░░░░░░░░░░░░░░░█░░░█
    █░░░░░█░░░░░░░░░░░░█░░░░░░░░░░█░░░░░░░░░░░░░█░░░░█
    █░░░░░█░░░░░░░░░░░█░░░░░░░░░░░░█░░░░░░░░░░░░█░░░░█
    █░░░░░█░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░░░░░░█░░░░█
    █░░░░░░█░░░░░░░░█░░░░░░░░░░░░░░░░█░░░░░░░░░█░░░░░█
    █░░░░░░█░░░░░░░█░░░░░░░░░░░░░░░░░░█░░░░░░░░█░░░░░█
    █░░░░░░░█░░░░░█░░░░░░░░░░░░░░░░░░░░█░░░░░░█░░░░░░█
    █░░░░░░░█░░░░█░░░░░░░░░░░░░░░░░░░░░░█░░░░░█░░░░░░█
    █░░░░░░░░█░░█░░░░░░░░░░░░░░░░░░░░░░░░█░░░█░░░░░░░█
    █░░░░░░░░░██░░░░░░░░░░░░░░░░░░░░░░░░░░█░█░░░░░░░░█
    █░░░░░░░░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░░░░░░░░█
    █░░░░░░░░█░░█░░░░░░░░░░░░░░░░░░░░░░░░░█░█░░░░░░░░█
    █░░░░░░░█░░░░██░░░░░░░░░░░░░░░░░░░░░██░░░█░░░░░░░█
    █░░░░░░█░░░░░░░██░░░░░░░░░░░░░░░░░██░░░░░░█░░░░░░█
    █░░░░░█░░░░░░░░░░███░░░░░░░░░░░███░░░░░░░░░█░░░░░█
    █░░░░█░░░░░░░░░░░░░░███████████░░░░░░░░░░░░░█░░░░█
    █░░░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░░█
    █░░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░█
    █░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░█
    ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██
    ██████████████████████████████████████████████████
    Author: Trevor Harmon
    Paint needed: 3756.6

Your `main` function should also create a second canvas with art of your own choosing (a house, a stick figure, a purely abstract design, or whatever you like). Feel free to add your own shape subclasses and change the grid size to anything reasonable. It should also print your name as author and the amount of paint needed for your artwork.

Hints:

* For the paint calculations, assume lines do not require any paint. Also, you don't need to worry about optimizing paint usage due to overlapping shapes. (Assume that all shapes will be painted in different colors, for example.)
* Your art will look stretched in the vertical direction because terminal characters are taller than they are wide. (Feel free to come up with a solution for this if you like!)
* For rectangle, it may be easier to delegate to the `Line` class to help determine the points. That is, a rectangle can be constructed using 4 lines.

For computing the line points, you can use [Bresenham's algorithm](https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm), where (`x1`,`y1`) is the start point of the line and (`x2`,`y2`) is the end point of the line:

    int dx =  abs (x2 - x1), sx = x1 < x2 ? 1 : -1;
    int dy = -abs (y2 - y1), sy = y1 < y2 ? 1 : -1; 
    int error = dx + dy;
    int e2;

    while (true) {
      
      // ADD POINT (X1,Y1)
      
      if (x1 == x2 && y1 == y2) {
          break;
      }
      e2 = 2 * error;
      if (e2 >= dy) { error += dy; x1 += sx; }
      if (e2 <= dx) { error += dx; y1 += sy; }
    }

For computing the circle points, you can use the [midpoint algorithm](https://en.wikipedia.org/wiki/Midpoint_circle_algorithm), where (`x0`,`y0`) is the center point of the circle and `radius` is its radius.

    int x = 0;
    int y = radius;
    int error = 1 - radius;

    do {
        // ADD POINT (x0 + x, y0 + y)
        // ADD POINT (x0 + y, y0 + x)
        // ADD POINT (x0 - y, y0 + x)
        // ADD POINT (x0 - x, y0 + y)
        // ADD POINT (x0 - x, y0 - y)
        // ADD POINT (x0 - y, y0 - x)
        // ADD POINT (x0 + y, y0 - x)
        // ADD POINT (x0 + x, y0 - y)

        if (error < 0) {
            error += (2 * x) + 1;
        } else {
            y--;
            error += (2 * x) - (2 * y) + 1;
        }
        x++;
    } while (y > x);

If you are having trouble getting started, try this:
* Derive a class `Circle` from `AbstractShape` and override its `getPoints` method to return a single point at the center of the circle (a circle of radius 1).
* Derive a class `Canvas` from `AbstractGrid` and override its `getPoints` method to return a vector of at least 2 circles at different center locations and radii.
* At this point, you should be able to instantiate a `Canvas` object in `main`, and when you invoke its `draw` method, you should see a canvas with your (very small) circles in it.
* Improve on the `Circle::getPoints` method so that it uses the midpoint algorithm (pseudocode above) to determine the points of the circle. You should now be able to see circles on your canvas instead of single points.
* Continue the process above for the `Line` and `Rectangle` classes.
* Add shapes as described in the `main` template, and you should see the test pattern illustrated above.
