#include <iostream> //cin, cout
#include <string> //string
#include <sstream> //istringstream
using namespace std;

int main(){
    string entrada;
    string p1, p2, p3;
    getline(cin, entrada); //atilio;21;quixada
    istringstream iss (entrada);

    getline(iss, p1, ';');
    getline(iss, p2, ';');
    getline(iss, p3, ';');



    cout << p1 << "," << p2 << "," << p3 << endl;
}

// Entrada -------
// atilio;21;quixada
// Saída ---------
// atilio,21,quixada