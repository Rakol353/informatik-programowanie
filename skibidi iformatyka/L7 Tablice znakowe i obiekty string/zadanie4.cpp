#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ciag[101], odwrocony[101];

    cout << "Podaj ciag znakow: ";
    cin.getline(ciag, 101);

    int dlugosc = strlen(ciag);

    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = ciag[dlugosc - i - 1];
    }

    odwrocony[dlugosc] = '\0';

    cout << "Odwrocony ciag: " << odwrocony << endl;

    return 0;
}