#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Podaj liczbę N: ";
    cin >> N;

    cout << "Liczby parzyste od 2 do " << N << ": " << endl;
    for (int liczba = 2; liczba <= N; liczba += 2) {
        cout << liczba << endl;
    }

    return 0;
}
