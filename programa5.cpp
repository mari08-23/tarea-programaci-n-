#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int original = n;   /
    int invertido = 0;
    while (n > 0) {
        int digito = n % 10;              
        invertido = invertido * 10 + digito; 
        n = n / 10;                       
    }
    if (original == invertido) {
        cout << "Es capicua" << endl;
    } else {
        cout << "No es capicua" << endl;
    }
    return 0;
}

