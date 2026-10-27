#include <iostream>
using namespace std;

// Funció auxiliar per calcular el MCD amb l'algorisme d'Euclides
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void read_rational(int& num, int& den) {
    char slash;
    cin >> num >> slash >> den;
    int d = gcd(num, den);
    num /= d;
    den /= d;
}
