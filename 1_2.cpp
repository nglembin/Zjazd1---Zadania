#include <iostream>
using namespace std;

int main() {
int x;
cout << "Podaj liczbe calkowita: ";
cin >> x;

if (x>0) {
    cout << "Liczba jest dodatnia";
}
else if (x==0) {
    cout << "Liczba jest równa 0";
}
else {
    cout << "Liczba jest ujemna";
}
    return 0;
}


