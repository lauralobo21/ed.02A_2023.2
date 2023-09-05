#include <iostream>
using namespace std;

    int main(){
        int vec[] = {23, 45, 67, 78, 78, 98}; //vetor
        int n = sizeof(vec) / sizeof(vec[0]); //tamanho do vetor
        
        // imprimir os elementos do vetor
        for(int i = {0}; i<n; i++){
            cout << vec[i] << " ";
        }
        cout << endl;

        // for-each

        for(int val : vec){
            cout << val << " ";
        }
        cout << endl;
}