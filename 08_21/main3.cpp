#include <string>
#include <iostream>
using namespace std;

    int main(){
        std::string name;
        cout << "digite um nome";
        //cin >> name;
        getline(cin, name);
        cout << name << endl;

        string str ("ana maria");
        name = name + " " + str;

        cout << name << endl;
    }