#include <iostream>
#include <limits>

using namespace std;

int main() {
    int menorValor; 
    menorValor = numeric_limits<int>::min();
    int maiorValor;
    maiorValor = numeric_limits<int>::max();

    cout << "Menor valor representável por int: " << menorValor;
    cout << "\nMaior valor representável por int: " << maiorValor;
    cout << endl;

    return 0;
}