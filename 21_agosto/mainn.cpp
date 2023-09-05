#include <iostream>
#include <limits>
using namespace std;

/***
 * @brief Essa função lê e retorna um int
*/
int read_int(){
    int valor{};

    while(true){
        cin >> valor;
        if(cin.fail()){ //houve erro de leitura
            //reseto os bits de erro
            cin.clear(); 
            //rlimpa o buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inválida; Tente novamente";
        }
        else{ //não houve falha na leitura
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return valor;
        }
    }
}

int main(){
   int x{};
   cout << "Digite um int:\n";
   x = read_int();
   cout << "valor digitado: " << x << endl;
}