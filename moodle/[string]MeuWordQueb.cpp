#include <iostream>
#include <string>
using namespace std;

bool isMinus(char x) {
    if( x >= 'a' && x <= 'z') {
        return true;
    } return false;
}

bool isMaius(char x) { //maiuscula
    if(x >= 'A' && x <= 'Z'){
        return true;
    } return false;
}
char toMinus(char y) {
    if(isMaius(y)) {
        y += 32;
    }
    return y;
}
char toMaius(char y) {
    if(isMinus(y))
        y -= 32;
    return y;
}

bool isSpace(char x) {
    return x == ' ';
}

bool isLetter(char x) { 
    if(isMaius(x) || isMinus(x)) {
        return true;
    } return false;
}

int main(){
    string frase;
    getline(cin, frase);
    char tipo;
    cin >> tipo;

    if(tipo == 'm') {
       for(int i = 0; i<(int)frase.size(); i++) {
            if(isMaius(frase[i])) {
                frase[i] = toMinus(frase[i]);
            }
       }
    }
    if(tipo == 'M') {
        for(int i = 0; i<(int)frase.size(); i++) {
            if(isMinus(frase[i])) {
                frase[i] = toMaius(frase[i]);
            }
        }
    }
    if(tipo == 'i') { //inverte case
        for(int i = 0; i<(int)frase.size(); i++) {
            if(isMinus(frase[i])){
                frase[i] = toMaius(frase[i]);
            } else {
                frase[i] = toMinus(frase[i]);
            }
        }
    }
    if(tipo == 'p') {
        frase[0] = toMaius(frase[0]);
        int tam = frase.size();
        frase[tam-1] = toMinus(frase[tam - 1]);
        for(int i = 1; i<(int)tam-1; i++) {
            if(isSpace(frase[i - 1])) {
                if(!isSpace(frase[i+1])) 
                    frase[i] = toMaius(frase[i]);
            } else if(isMaius(frase[i])){
                frase[i] = toMinus(frase[i]);
            }
        }
    } 
   cout << frase << endl;

}
