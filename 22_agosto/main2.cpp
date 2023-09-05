#include <iostream> //cin, cout
#include <string> //string
#include <sstream> //istringstream
using namespace std;

int main(){
    for(int i{1}; i<=5; i++){
        double resultado{}, token{};
        std::string entrada;
        std::getline(std::cin, entrada);

        std::istringstream iss;
        iss.str(entrada);

        while(iss >> token){
            resultado = resultado + token;
        }

        cout << resultado << endl;
    }
}