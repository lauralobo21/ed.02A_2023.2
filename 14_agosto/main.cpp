#include <iostream>

using namespace std;

int main(){
    int x = 23; //x( 23 ) ou x{ 23 }
    std::cout << "Olá Mundo!\n";
    std::cout << "valor de x = " << x << '\n';

    return 0;
}

//ctrl + shift + `  (abre o terminal)
// ctrl + alt + n (compila no code runner)
// g++ main.cpp -o main
// g++ -std=c++17 -Wall -Wextra main.cpp -o main (mostra o que não foi declarado)
// "cpp": "cd $dir && g++ -std=c++17 -Wall -Wextra -pedantic-errors $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",