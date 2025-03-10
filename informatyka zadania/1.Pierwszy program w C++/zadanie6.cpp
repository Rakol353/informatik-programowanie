#include <iostream>
using namespace std;

int main() {
    int liczba1, liczba2;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    int suma = liczba1 + liczba2;

    cout << "Suma: " << suma << endl;

    cout << "Suma jest liczba " << (suma % 2 == 0 ? "parzysta" : "nieparzysta") << "." << endl;

    return 0;
}
