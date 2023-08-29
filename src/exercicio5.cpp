#include <iostream>

using namespace std;

int main() {
    
    bool valor1 = true;
    bool valor2 = false;
    int a;
    float b;
    char c;
    long int d;
    double e;
    
    a = static_cast<int>(valor1);
    cout << a;
    cout << endl;
    a = static_cast<int>(valor2);
    cout << a;
    cout << endl;
    
    b = static_cast<float>(valor1);
    cout << b;
    cout << endl;
    b = static_cast<float>(valor2);
    cout << b;
    cout << endl;
    
    c = static_cast<char>(valor1);
    cout << c;
    cout << endl;
    c = static_cast<char>(valor2);
    cout << c;
    cout << endl;
    
    d = static_cast<long int>(valor1);
    cout << d;
    cout << endl;
    d = static_cast<long int>(valor2);
    cout << d;
    cout << endl;
    
    e = static_cast<double>(valor1);
    cout << e;
    cout << endl;
    e = static_cast<double>(valor2);
    cout << e;
    cout << endl;

    return 0;
}