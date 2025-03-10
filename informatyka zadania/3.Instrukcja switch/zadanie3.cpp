#include <iostream>
using namespace std;

int main() {
    int godziny;       
    char pojazd;      
    int oplata = 0;   

    cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;


    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> pojazd;


    switch (pojazd) {
        case 'S':  
            oplata = godziny * 5;
            break;
        case 'M':  
            oplata = godziny * 3;
            break;
        case 'A':  
            oplata = godziny * 10;
            break;
        default:
            cout << "Nieznany typ pojazdu!" << endl;
            return 1;  
    }

 
    cout << "Oplata za parkowanie: " << oplata << " zl" << endl;

    return 0;
}
