#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pid;
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
    
    //A única diferença notada entre float e double, nesse caso,
    //foi a impressão do resultado com 16 casas decimais.
    //Enquanto em float, o resultado foi de "3.141592741012573",
    //em double, o resultado foi de "3.141592653589793".
}