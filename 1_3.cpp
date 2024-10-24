#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Podaj liczbe calkowita: ";
    cin >> x;

    if (x == 0) {
        cout << "Liczba jest równa 0";
    }
    else if (x % 2 == 0) {
        cout << "Liczba jest parzysta";
    }
    else {
        cout << "Liczba jest nieparzysta";
    }
    
    return 0;
}
