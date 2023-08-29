#include <iostream>

using namespace std;

int main(void) {
    char caractere;
    int codigo;
    cout << "Digite um caractere qualquer: ";
    cin >> caractere;
    codigo = static_cast<int>(caractere); // Obtém o código ASCII do caractere
    cout << "Carac - Dec - Oct - Hex\n";    
    cout << "'" << caractere << "' -   " << codigo << " - " << oct << codigo << " - " << hex << codigo;
    cout << endl;

    return 0;
}