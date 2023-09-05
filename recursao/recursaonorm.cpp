#include <iostream>
#include <iomanip>

using namespace std;
    //função recursiva
    conta_digitos(int value){
        if(value < 10)
            return 1;
        value = value / 10;
            return 1 + conta_digitos(value);
    }

    int main(){
        //calcular o numero de dígitos de um número
        int value = 123456787;
        int ndig = 0;
        cout << value << " " << ndig << endl;
        while(value >= 10) {
            value = value / 10;
            ndig += 1;
        }
        ndig += 1;
        cout << ndig << endl;
    }