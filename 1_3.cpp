#include <iostream>
using namespace std;

int main() {
int x;
cout << "Podaj liczbe calkowita: ";
cin >> x;

if (x % 2 == 1) {
    cout << "Liczba jest nieparzysta";
}
else if (x==0) {
    cout << "Liczba jest równa 0";
}
else {
    cout << "Liczba jest parzysta";
}
    return 0;
}


