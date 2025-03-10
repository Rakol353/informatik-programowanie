#include <iostream>
using namespace std;
 
int main() {
    int N;
 
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;
 
    if (N < 0) {
        cout << "N musi być dodatnie!" << endl;
        return 1; 
    }
 
    int i = 1
	 
    while (i <= N) {
        cout << i << " "; 
        i += 2; 
    }
 
    cout << endl;
    return 0;
}