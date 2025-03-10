#include <iostream>
using namespace std;

int main() {
    int szer, wys, margin = 0;
    cout << "Podaj szerokosc: ";
    cin >> szer;
    cout << "Podaj wysokosc: ";
    cin >> wys;
    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < szer; j++) {
            if (j < margin || j >= szer - margin) cout << " ";
            else cout << "*";
        }
        cout << endl;
        margin++;
    }
    return 0;
}