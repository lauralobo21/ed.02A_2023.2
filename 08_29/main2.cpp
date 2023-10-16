#include <iostream>
using namespace std;

int main() {
    int v[5] = {1,2,3,4,5};
    int *ptr = v;

    for(int i = 0; i<5; i++) {
        cout << *(ptr + i) << endl; //ou ptr[i]
    }
}