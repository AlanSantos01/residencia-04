#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long double pid;
    pid = 3.141592653589793238462643383279502884197169;

    cout.precision(2);
    cout << "Pi = " << pid;
    cout.precision(4);
    cout << "\nPi = " << pid;
    cout.precision(8);
    cout << "\nPi = " << pid;
    cout.precision(16);
    cout << "\nPi = " << pid;
    cout << endl;

    return 0;
    
    //Utilizando o exemplo anterior, não houve diferença notada entre double e long double,
    //nesse caso, no meu sistema.
}