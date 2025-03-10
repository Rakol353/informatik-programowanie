#include <iostream>
using namespace std;

int main() {
    int szer, wys;
    cout << "Podaj szerokosc: ";
    cin >> szer;
    cout << "Podaj wysokosc: ";
    cin >> wys;
    for (int i = 0; i < wys; i++) {
        if (i == 0 || i == wys - 1) {
            for (int j = 0; j < szer; j++) cout << "-";
        } else {
            for (int j = 0; j < szer; j++) {
                if (j == 0 || j == szer - 1) cout << "|";
                else cout << ((i + j) % 2 == 0 ? "#" : "*");
            }
        }
        cout << endl;
    }
    return 0;
}