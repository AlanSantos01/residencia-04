#include <iostream>
#include <limits>

using namespace std;

int main() {
    float menorValor; 
    menorValor = numeric_limits<float>::min();
    float maiorValor;
    maiorValor = numeric_limits<float>::max();

    cout << "Menor valor representável por int: " << menorValor;
    cout << "\nMaior valor representável por int: " << maiorValor;
    cout << endl;

    return 0;
}