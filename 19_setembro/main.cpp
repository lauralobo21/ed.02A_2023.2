//Classe, Objeto, Encapsulamento
#include <iostream>
#include "Box.h"
using namespace std;

int main() {
    //Box caixa(3.4, 5.3, 7.8);
    //cout << caixa.volume() << endl;

    Box b(2, 3, 4);
    cout << b.to_string() << endl;
    /*cout << "volume: " << b.volume() << endl;
    b.set_height(2);
    b.set_width(4);
    b.set_length(3);
    cout << b.volume() << endl;
*/
}