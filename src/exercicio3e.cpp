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
    long int menorValorLI; 
    menorValorLI = numeric_limits<long int>::min();
    long int maiorValorLI;
    maiorValorLI = numeric_limits<long int>::max();
    long int li;
    li = maiorValorLI;
    unsigned int ui;
    ui = li;
    
    cout << "Menor valor representável por int: " << menorValor;
    cout << "\nMaior valor representável por int: " << maiorValor;
    cout << "\nMenor valor representável por unsigned long int: " << menorValorULI;
    cout << "\nMaior valor representável por unsigned long int: " << maiorValorULI;
    cout << "\nVariável 'uli': " << uli;
    cout << "\nMenor valor representável por long int: " << menorValorLI;
    cout << "\nMaior valor representável por long int: " << maiorValorLI;
    cout << "\nVariável 'li': " << li;
    cout << "\nVariável 'ui': " << ui;
    
    li = ui;
    cout << "\nVariável 'li': " << li;
    //As variáveis "ui" e "li" apresentarão resultados iguais, após a atribuição,
    //apesar de "unsigned int" suportar apenas números inteiros positivos e um domínio reduzido de valores suportados,
    //enquanto "long int" possui um domínio estendido para os números inteiros.
    cout << endl;
    

    return 0;
}