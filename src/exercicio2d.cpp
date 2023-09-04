#include <iostream>

using namespace std;

int main(void) {
    char caractere_especial1 = 'ç';
    char caractere_especial2 = 'ã';
    int codigo;
    codigo = static_cast<int>(caractere_especial1); // Obtém o código ASCII do caractere
    cout << "Carac - Dec - Oct - Hex\n";    
    cout << "'" << caractere_especial1 << "' -   " << codigo << " - " << oct << codigo << " - " << hex << codigo;
    cout << endl;
    codigo = static_cast<int>(caractere_especial2); // Obtém o código ASCII do caractere
    cout << "Carac - Dec - Oct - Hex\n";    
    cout << "'" << caractere_especial2 << "' -   " << codigo << " - " << oct << codigo << " - " << hex << codigo;
    cout << endl;

    return 0;
}
