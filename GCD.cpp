﻿#include <iostream>
using namespace std;
int gcd(int a, int b) {  //Greatest common divisor
    if (a == 0) {
        return b;
    }
    else {
        // poqr bajanaray bajanenq mnacordi vra
        // aynqan minchev mnacordum stacvi 0
        return gcd(b % a, a);
    }
}

int main() {

    int a = 12;
    int b = 9;
    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;

    return 0;
}