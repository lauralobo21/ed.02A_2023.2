// BUSCA BINARIA
#include <iostream>
using namespace std;

int busca_binaria(int v[], int ini, int fim, int x) {
    if(ini > fim)
        return -1;
    int meio = (ini + fim) / 2;
    if(v[meio] == x) 
        return meio;
    if(v[meio] < x) 
        return busca_binaria(v, m+1, fim, x);
    else 
        return busca_binaria(v, ini, m-1, x);
}