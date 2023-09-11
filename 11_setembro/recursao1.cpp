#include <iostream>
#include <iomanip>
using namespace std;
/*
    RECURSAO
PASSO 1: Escreva o que a função faz com comentários
PASSO 2: Verifique se a função faz o que deveria fazer se n é pequeno
PASSO 3: Verifica se ela faz o que se espera com o um numero n menor que ele
*/

//recebe um vetor V[0, n-1] com n elementos e retorna o valor do elemento máximo
int max(int v[], int n) { 
    if(n==1)
        return v[0];
    else {
        int x = max(v, n-1);
        if(x > v[n-1])
            return x;
        else 
            return v[n-1];
    }
}
