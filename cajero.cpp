// cajero automatico tradicional
//

#include <iostream>
using namespace std;

int main() {
    int opcion;

    cout << "=== CAJERO AUTOMATICO ===" << endl;
    cout << "1. Ver saldo" << endl;
    cout << "2. Retirar" << endl;
    cout << "3. Depositar" << endl;
    cout << "Elige una opcion: ";
    cin >> opcion;

    switch (opcion) {
    case 1:
        cout << "Has elegido: Ver saldo." << endl;
        break;
    case 2:
        cout << "Has elegido: Retirar." << endl;
        break;
    case 3:
        cout << "Has elegido: Depositar." << endl;
        break;
    default:
        cout << "Opcion no valida." << endl;
    }

    return 0;
}