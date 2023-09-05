#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Ponto{
    double x;
    double y;
};

struct Retangulo {
    Ponto P; //ponto superior esquerdo
    Ponto Q; //ponto inferior direito
    Ponto M; //ponto inferior esquerdo
    Ponto S; //ponto superior direito
};

Retangulo inicializa_retangulo(Ponto P, Ponto Q) {
    Retangulo r;
    r.P = P;
    r.Q = Q;
    r.M.x = P.x;
    r.M.y = Q.y;
    r.S.x = Q.x;
    r.S.y = P.y;
    return r;
}

double area_retangulo(Retangulo r) {
    double base = abs(r.Q.x - r.M.x); //abs = módulo
    double altura = abs(r.P.y - r.M.y);
    double area = base * altura;
    return area;
}

double perimetro(Retangulo r) {
    double base = abs(r.Q.x - r.M.x);
    double altura = abs(r.P.y - r.M.y);
    return 2*base + 2*altura;
}

double distancia(double x, double y) {
    return sqrt(pow((x-0), 2) + pow((y- 0), 2)); // pow = potencia pow(a, b) a elevado a b
}

double distancia(Ponto p, Ponto q) {
    return sqrt(pow((p.x - q.x), 2) + pow((p.y - q.y), 2));
}

double diagonal_retangulo(Retangulo r) {
    return distancia(r.P, r.Q);
}

int main() {
    cout << "Digite as coordenadas do ponto superior"
        "esquerdo do retângulo: ";
    double x, y;
    cin >> x >> y;
    Ponto P {x,y};

    cout << "Digite as coordenadas do ponto inferior"
        "direito do retângulo: ";
    cin >> x >> y;
    Ponto Q {x,y};

    Retangulo r = inicializa_retangulo(P, Q);

    cout << "Área = "<< area_retangulo(r) << '\n';
    cout << "Perímetro = " << perimetro(r) << '\n';
    cout << "Diagonal = " << diagonal_retangulo(r) << '\n';
}

