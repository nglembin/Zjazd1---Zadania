#include <iostream>
using namespace std;

int main() {
int x1;
int x2;
int x3;
cout << "Podaj pierwsza liczbe: ";
cin >> x1;
cout << "Podaj druga liczbe: ";
cin >> x2;
cout << "Podaj trzecia liczbe: ";
cin >> x3;

if (x1 > x2 && x3) {
    cout << "Pierwsza liczba jest najwieksza " << x1;
}
else if (x2 > x1 && x3 ) {
    cout << "Druga liczba jest najwieksza " << x2;
}
else if (x3 > x2 && x1 ) {
    cout << "Trzecia liczba jest najwieksza " << x3;
}
    return 0;
}


