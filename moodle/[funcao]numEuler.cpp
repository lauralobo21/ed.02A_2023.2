#include <iostream>
#include <iomanip>

// 5 * 4 * 3 * 2 * 1
long int fatorial(int n){
    if(n == 1)
        return 1;
    return n * fatorial(n - 1);
}

double euler(int N){
    if(N == 1)
        return 2;
    return (1.0 / fatorial(N)) + euler(N-1);
}


int main(){
    int N;
    std::cin >> N;
    
    std::cout << std::fixed << std::setprecision(6) << euler(N) << '\n';
}