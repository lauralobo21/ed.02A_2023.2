

//PALINDROMO -----------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

bool eh_palindromo(string palavra,  int ini, int fim) {
    if(ini >= fim) {
        return true;
    } 
    else if(palavra[ini] != palavra[fim]) {
        return false;
    }
    else {
        return eh_palindromo(palavra, ini+1, fim-1);
    }
}

int main() {
    string palavra {"cigarra"};
    cout << boolalpha
         << eh_palindromo(palavra,0,palavra.size()-1) << endl;
}