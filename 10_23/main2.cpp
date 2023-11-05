#include <iostream>
#include "List.h"
using namespace std;

int main() {
    List lista{1,2,3,4,5,6,7};
    for(int i{1}; i<=9; ++i) {
        lista.push_back(i);
    }

    for(auto it = lista.begin(); it != lista.end(); ++it) {
        if(*it == 3) {
            auto it2  = lista.erase(it);
            cout << "elemento apos = " << *it2 << endl;
            //lista.insert(it, 667);
            break;
        }
    }
    
    auto it = lista.begin();
    while(it != lista.end()) {
        cout << *it << " ";
        ++it;
    }
    cout << endl;
}