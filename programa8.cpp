#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int original = n;
    int suma = 0;
    while (n > 0) {
        int digito = n % 10;
        suma = suma + digito * digito * digito;
        n = n / 10;
    }
    if (suma == original) {
        cout << "Es de Armstrong" << endl;
    } else {
        cout << "No es de Armstrong" << endl;
    }
    return 0;
}