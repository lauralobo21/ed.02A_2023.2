#include <iostream>
#include "ForwardList.h"
using namespace std;

int main() {
    ForwardList lista;
    for(int i=0; i<=10; ++i) {
        lista.push_front(i);
    }
    lista.print();
}