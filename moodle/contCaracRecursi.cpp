//Contando caracteres recursivamente

#include <iostream>
#include <string>

using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 'str' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.
int contaCaracteres(string str, int n, char c)
{
    if(n == 0)
        return 0;
    //começando do fim
    if(str[n-1] == c)
        return 1 + contaCaracteres(str, n-1, c);
    else 
        return contaCaracteres(str, n-1, c);
}

int main() 
{
   string frase;
   getline(cin, frase);
   char letra;
   cin >> letra;
   cout << contaCaracteres(frase, frase.size(), letra) << endl;

}