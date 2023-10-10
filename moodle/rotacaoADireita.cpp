#include <iostream>
#include <vector>
using namespace std;

void right_rotation(vector<int>& vet, int nrot){
    for(int i = 0; i<nrot; i++) {
        //coloca o último elemento na primeira opção
        //begin > é o começo
        //back > ultimo elemento
        vet.insert(vet.begin(), vet.back());
        //apaga o último elemento
        vet.pop_back();
    }
}

void show(vector<int> &vet) {
    cout << "[ ";
    for(int value : vet)
        cout << value << " ";
    cout << "]\n";
}

int main(){
    int size, nrot;
    cin >> size >> nrot;
    vector<int> vet(size);
    for(int i = 0; i < size; i++)
        cin >> vet[i];
    
    right_rotation(vet, nrot);
    show(vet);
}

