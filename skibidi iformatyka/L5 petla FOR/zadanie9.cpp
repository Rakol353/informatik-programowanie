#include <iostream>
using namespace std;

int main() {
    int licznik = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j == i) continue;
            for (int k = 0; k <= 9; k++) {
                if (k == i || k == j) continue;
                cout << i << j << k << endl;
                licznik++;
            }
        }
    }
    cout << "Liczb bez powtarzajacych sie cyfr: " << licznik << endl;
    return 0;
}