#include <iostream>
#include <vector>

using namespace std;

void kill(vector<int> &elem, int &e) {
    int p;
    int size = elem.size();
    for(int i = 0; i < size; i++) {
        if(elem[i] == e) {
            p = i;
            break;
        }
    }

    int kill = (p + 1)%size;
    
    e = elem[(kill + 1)%size];
    elem.erase(elem.begin() + kill);
}


int main() {
    int size;
    int e;
    cin >> size >> e;
    vector<int> elem;
    for(int i = 0; i < size; i++) {
        elem.push_back(i + 1);
    }
    while(size--) {
        cout << "[ ";
        for(int i = 0; i < elem.size(); i++) {
            if(elem[i] == e) {
                cout << elem[i] << "> ";
            }else{
                cout << elem[i] << " ";
            }
        }
        
        cout << "]" << endl;
        
        kill(elem, e);
    }

    
}



