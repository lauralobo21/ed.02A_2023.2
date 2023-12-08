#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<char>fila;
    
    for(char i = 'A'; i<='P'; i++) {
        fila.push(i);
    }
    for(int i = 0; i<15; i++) {
        int n1, n2; //qtd gols de um e de outro
        cin >> n1 >> n2;
        
        char time1 = fila.front(); //pega o primeiro time da fila e salva em time1
        fila.pop(); // tira ele da fila
        
        char time2 = fila.front();
        fila.pop();
        
        if(n1 > n2) {
            fila.push(time1);
        } else {
            fila.push(time2);
        }
    } 
    cout << fila.front() << endl;
}
