#include <iostream>

using namespace std;

int main(void) {
    char caractere;
    int codigo, i;
    // Loop de 0 a 9 para imprimir os caracteres numéricos e seus códigos
    for (i = 0; i <= 9; i++) {
        caractere = '0' + i; // Converte o número para um caractere
        codigo = static_cast<int>(caractere); // Obtém o código ASCII do caractere

        cout << "'" << caractere << "' - " << codigo;
        cout << endl;
    }

    return 0;
}
