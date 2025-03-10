#include <iostream>
using namespace std;

int main() {
    int punkty;

    cout << "Podaj ile procent dosta³es z egzaminu to oblicze ci jaka masz ocene: ";
    cin >> punkty;

    if (punkty < 0 || punkty > 100) {
        cout << "Bledna liczba punktow! Punkty musza byc w zakresie od 0 do 100." << endl;
    } else {
    	
        if (punkty <= 49) {
            cout << "Ocena: Niedostateczna" << endl;
        } else if (punkty <= 69) {
            cout << "Ocena: Dostateczna" << endl;
        } else if (punkty <= 84) {
            cout << "Ocena: Dobra" << endl;
        } else if (punkty <= 99) {
            cout << "Ocena: Bardzo dobra" << endl;
        } else {
            cout << "Ocena: Celujaca" << endl;
        }
    }

    return 0;
}

