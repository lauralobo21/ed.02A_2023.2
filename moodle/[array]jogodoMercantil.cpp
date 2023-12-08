#include <iostream>
#include <iomanip>

using namespace std;

    int main(){
        int n;
        cin >> n;
        float preco[n];
        for(int i = 0; i<n; i++){
            cin >> preco[i];
        }
    
        float jog1[n];
        for(int j = 0; j<n; j++)
            cin >> jog1[j];
    
        char jog2[n];
        cin.ignore();
        for(int k = 0; k<n; k++){
            cin >> jog2[k];
            cin.ignore();
        }
        
        
        int cont1 = 0;
        int cont2 = 0;
        
        for(int i = 0; i<n; i++){
            if((jog1[i] == preco[i]) || (jog1[i] > preco[i] && jog2[i] == 'M') || (jog1[i] < preco[i] && jog2[i] == 'm')){
                cont1++;
            }
            else if((jog1[i] > preco[i] && jog2[i] == 'm') || (jog1[i] < preco[i] && jog2[i] == 'M')){
                cont2++;
            }
            
            
        }
    
        if(cont1 > cont2)
            cout << "primeiro" << endl;
        else if(cont2 > cont1) 
            cout << "segundo" << endl;
        else 
            cout << "empate" << endl;
        
    }