#include <iostream>
using namespace std;

struct Ponto
{
    float x;
    float y;
};

void troca(Ponto *p1, Ponto *p2) {
    Ponto aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main() {
    Ponto p {1.2, 3.4}, q {7.8, 99.0};
    troca(&p, &q);
    
    cout << "(" << p.x << "," << p.y << ")" << endl;
    cout << "(" << q.x << "," << q.y << ")" << endl;
}