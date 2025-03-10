#include <iostream>
using namespace std;

int main() {
    int liczba;
    int suma = 0;

    cout << "Podaj 9 liczb calkowitych:" << endl;

    for (int i = 0; i < 9; i++) {
        cout << "Podaj liczbe " << i+1 << ": ";
        cin >> liczba;
        suma += liczba;
    }

    double srednia = suma / 9.0;

    cout << "Srednia liczb: " << srednia << endl;

    return 0;
}

