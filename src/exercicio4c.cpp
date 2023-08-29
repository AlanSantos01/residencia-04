#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float pif;
    pif = 3.141592653589793238462643383279502884197169;

    cout.precision(2);
    cout << "Pi = " << pif;
    cout.precision(4);
    cout << "\nPi = " << pif;
    cout.precision(8);
    cout << "\nPi = " << pif;
    cout.precision(16);
    cout << "\nPi = " << pif;
    cout << endl;

    return 0;
}