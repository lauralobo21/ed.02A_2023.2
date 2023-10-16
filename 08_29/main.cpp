/* PONTEIROS */

#include <iostream>
using namespace std;

/*int main() {
    int x {20};
    int *ptr {&x}; //tem que ser & pois ptr so armazena end. de memoria

    cout << x << endl; // 20
    cout << &x << endl; //endereço de x
    cout << ptr << endl; //endereço de ptr
    cout << *ptr << endl; //20
    *ptr = 50;
    cout << x << endl; //50
}*/

int main() {
    int x {20};
    float y {56.7};
    int *ptr {&x}; //int *ptr {nullptr}; valor nulo
    float *fptr {&y};

    cout << *ptr << endl << *fptr << endl;
}