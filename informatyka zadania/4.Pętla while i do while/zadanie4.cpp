#include <iostream>
using namespace std;

int main() {
    int n, liczba = 0, i = 1;
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> n;
    
    do {
        if (i % 2 == 0) liczba++;
        i++;
    } while (i <= n);
    cout << "Liczby parzyste od 1 do " << n << " wynosi: " << liczba << endl;
    
    return 0;
}
