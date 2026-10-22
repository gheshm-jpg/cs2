
#include <iostream>
#include <string>

using namespace std;

class Point2i {
public:
    // the slides have not covered private in depth as of wednesday
    // so i am following the standard taught by the slides thus far
    int x, y;

    // default constructor initializes the point at the origin
    Point2i() {
        x = 0;
        y = 0;
    }

    // constructor initializes the point with given coordinates
    // hank taught using this-> during wednesday's discussion
    Point2i(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // reflect across the vertical line x = p
    void reflect_x(int p) {
        int reflect_by = p - x;
        x += 2 * reflect_by;
    }

    // reflect across the horizontal line y = q
    void reflect_y(int q) {
        int reflect_by = q - y;
        y += 2 * reflect_by;
    }

    // move the point using another point passed by constant reference
    void translate(const Point2i& point) {
        x += point.x;
        y += point.y;
    }
};

int main() {
    // read the initial coordinates
    int p, q;
    cin >> p >> q;

    // create the starting point
    Point2i my2d(p, q);

    // read the number of instructions
    int i;
    cin >> i;

    // process each instruction
    for (int j = 0; j < i; j++) {
        string instruct;
        cin >> instruct;

        if (instruct == "translate") {
            // read the horizontal and vertical movements
            int x, y;
            cin >> x >> y;

            // create a point to represent the movement
            Point2i movement(x, y);
            my2d.translate(movement);
        }
        else if (instruct == "reflect_x") {
            // read the vertical line and reflect the point
            int x;
            cin >> x;
            my2d.reflect_x(x);
        }
        else if (instruct == "reflect_y") {
            // read the horizontal line and reflect the point
            int y;
            cin >> y;
            my2d.reflect_y(y);
        }
    }

    // output the final coordinates
    cout << my2d.x << " " << my2d.y << endl;

    return 0;
}

