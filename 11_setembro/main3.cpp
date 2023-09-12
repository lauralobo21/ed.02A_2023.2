//FIBONACCI

#include <iostream>
using namespace std;

long F(long n) {
    if( n == 0 || n == 1)
        return n;
    else 
        return F(n-1) + F(n-2);
}

int main() {
    long x;
    cin >> x;
    cout << F(x) << endl;
}