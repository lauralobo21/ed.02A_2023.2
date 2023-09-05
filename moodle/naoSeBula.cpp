        // if (vogal.find(tolower(L)) != string::npos) return true;
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool ehVogal(char L) {
    string vogal = "aeiou";
    for(int i = 0; i<5; i++) {
        if(L == vogal[i]) { 
            return true;
        }
    return false;   
    }
}

int main() {
    string frase;
    string palavra;
    string out = "";
    
    getline(cin, frase);
    istringstream iss (frase);
    
    while(getline(iss, palavra, ' ')) {
        string palavraout = "";
        
        for(int i = 0; i<palavra.size() - 1; i++) {
            if(ehVogal(palavra[i]) && !ehVogal(palavra[i+1])){
                
                string silabarep = palavra.substr(0, i+1);
                for(int j = 0; j < 3; j++){
                    palavraout = palavraout + silabarep;
                    palavraout += palavra.substr(i+1, palavra.size());
                    break;
                }
            }
        }
        if(palavraout == "") {
            palavraout = palavraout + palavra;
            out = out + palavraout + " ";
        }
    }
    
    out.pop_back();
    
    cout << out << endl;
}