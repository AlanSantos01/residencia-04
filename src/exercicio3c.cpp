#include <iostream>
#include <limits>

using namespace std;

int main() {
    int menorValor; 
    menorValor = numeric_limits<int>::min();
    int maiorValor;
    maiorValor = numeric_limits<int>::max();
    unsigned long int menorValorULI; 
    menorValorULI = numeric_limits<unsigned long int>::min();
    unsigned long int maiorValorULI;
    maiorValorULI = numeric_limits<unsigned long int>::max();
    unsigned long int uli;
    uli = maiorValorULI;
    long int li;
    li = uli;
    
    cout << "Menor valor representável por int: " << menorValor;
    cout << "\nMaior valor representável por int: " << maiorValor;
    cout << "\nMenor valor representável por unsigned long int: " << menorValorULI;
    cout << "\nMaior valor representável por unsigned long int: " << maiorValorULI;
    cout << "\nVariável 'uli': " << uli;
    cout << "\nVariável 'li': " << li;
    
    uli = li;
    cout << "\nVariável 'uli': " << uli;
    //As variáveis "uli" e "li" apresentarão resultado diferente,
    //pois "unsigned long int" suporta apenas números inteiros positivos (ou seja, sem sinal).
    //Já "long int" possui um domínio estendido para os números inteiros.
    cout << endl;

    return 0;
}