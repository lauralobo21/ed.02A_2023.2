#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    string frase;
    string palavra;
    string last;
    getline(cin, frase);
    stringstream ss(frase);

    while(ss >> palavra) {
        int i{};
        while(palavra[i] == last[i]) {
            i++;
        }
        if(palavra[i] < last[i]) {
            cout << "não";
            return 0;
        }
        last = palavra;
    }
    cout << "sim";
}