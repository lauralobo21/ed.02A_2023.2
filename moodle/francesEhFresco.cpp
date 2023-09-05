#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;



bool isVogal(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    } return false;
}

int main() {
    char frase[100];
    cin.getline(frase, 100);
   
    for(int i{}; i<strlen(frase); i++) {
        
        cout << frase[i];
        
        if(isVogal(frase[i]) && frase[i + 1] == ' ' && frase[i + 2] == frase[i]) {
            i = i + 2;
        }
        if(isVogal(frase[i]) && frase[i + 1] == ' ' && (frase[i + 2]) == frase[i]) {
            i = i + 2;
        }
    }

    return 0;
}