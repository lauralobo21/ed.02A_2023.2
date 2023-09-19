#ifndef POINT_H
#define POINT_H
#include <cmath>
class Point {
private:
    double x;
    double y;

public: 
    Point(double x = 1, double y = 1) {
        this->x = x;
        this->y = y;
    }
    double get_x() {
        return x;
    }
    double get_y() {
        return y;
    }
    void set_x(double x) {
        this->x = x;
    }
    void set_y(double y) {
        this->y = y;
    }

    double calcDistancia(Point p) {
        return sqrt(pow((p.x - x), 2) + pow(p.y - y, 2));
    }

};

#endif