//REFERÊNCIAS E PONTEIROS
#include <iostream>
using namespace std;

int soma(const int& a, const int& b) {
    return a + b;
}

int main() {
    int x{87};
    int y{1};

    int& ref1 = x;      //referência comum
    ref1 = 99;
    cout << ref1 << endl;

    const int& ref2 = x; //const - tem acesso mas NÃO MUDA O VALOR DA VARIÁVEL
    cout << ref2 << endl;

    cout << soma(3, 4) << endl;
}
