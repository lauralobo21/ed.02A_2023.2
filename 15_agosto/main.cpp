#include <iostream>
#include "math.hpp"
// using namespace std;
// using namespace ufc;
// using std::cout; > nao precisa usar std:: no cout

int main(){
    int x{}, y{};
    std:: cout << "Digite dois inteiros: ";

    std::cin >> x >> y;

    std::cout << "soma = " << ufc::sum(x,y) << std::endl;
    std::cout << "subtracao = " << ufc::sub(x,y) << std::endl;
    std::cout << "multiplicacao = " << ufc::mult(x,y) << std::endl;
    std::cout << "divisao = " << ufc::divi(x,y) << std::endl;

// g++ *.cpp -o main   
//     |executa todos os arquivos com .cpp

// os arquivos .o geram o arquivo executado .exe

/* #include <iomanip>
>inteiros
    std::dec
    std::oct
    std::hex
    std::showbase

    EX:
    int x = 20;
    cout << std::hex << x << '\n';

>ponto flutuante
    float f = 3345.6789;
    cout << std::fixed << std::setprecision(2) << f; [só pega duas casas decimais]
        |só pra casa decimal|

>notaçao cientifica
    std::scientific
*/

}