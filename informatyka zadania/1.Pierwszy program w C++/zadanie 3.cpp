#include <iostream>
using namespace std;
 
int main() {
    int zmienna1 = 10;
    float zmienna2 = 3.14;
    char zmienna3 = 'A';
    bool zmienna4 = true;
 
    cout << "Zmienna calkowita: " << zmienna1 << endl;
    cout << "Zmienna zmiennoprzecinkowa: " << zmienna2 << endl;
    cout << "Zmienna znakowa: " << zmienna3<< endl;
    cout << "Zmienna logiczna: " << (zmienna4 ? "true" : "false") << endl;
 
    return 0;
}
