#include <iostream> //cin, cout
#include <string> //string
#include <sstream> //istringstream
using namespace std;

int main(){
    double resultado{}, token{};
    string entrada;
    getline(cin, entrada);

    istringstream iss;
    iss.str(entrada);

    while(iss >> token){
        iss >> token;
        resultado = resultado + token;
    }

    cout << resultado << endl;
}