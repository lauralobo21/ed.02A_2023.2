#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    Point p(1,2), q(3,4);
    cout << p.get_x() << "," << p.get_y() << endl;
    cout << q.get_x() << "," << q.get_y() << endl;
    cout << "distancia: " << p.calcDistancia(q) << endl;
}
//g