#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Podaj liczbę N: ";
    cin >> N;

    int liczba = 2;

    cout << "Liczby parzyste od 2 do " << N << ": " << endl;
    while (liczba <= N) {
        cout << liczba << endl;
        liczba += 2;
    }

    return 0;
}
