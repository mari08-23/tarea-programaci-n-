#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "No es primo" << endl;
            return 0;
        }
    }
    cout << "Es primo" << endl;
    return 0;
}