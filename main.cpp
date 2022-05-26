#include <iostream>
#include "modul.h"
using namespace std;

int main()
{
    char z=0;
    auto a=0,b=0;

    cout << "Podaj 2 liczby do dzialania:" << endl;
    cout << "============================" << endl;
    cin >> a >> b;
    cout << endl << "Podaj znak operacji" << endl;
    cin >> z;
    cout << endl;

        switch (z) {
            case '+': {
                cout << "Wynik operacji:  " << dodaj(a, b) << endl;
            }
                break;
            case '-': {
                cout << "Wynik operacji:  " << odejmij(a, b) << endl;
            }
                break;
            case '*': {
                cout << "Wynik operacji:  " << mnoz(a, b) << endl;
            }
                break;
            case '/': {
                cout << "Wynik operacji:  " << dziel(a, b) << endl;
            }
                break;
            default:
                cout << "Nie ma takiej operacji" << endl;
    }
    return 0;


}
