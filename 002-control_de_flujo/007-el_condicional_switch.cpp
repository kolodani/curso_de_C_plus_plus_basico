#include <iostream>

using namespace std;

int main()
{
    int opcion = 0;
    cout << "Introduce una opcion: ";
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            cout << "Opcion 1" << endl;
            break;
        case 2:
            cout << "Opcion 2" << endl;
            break;
        case 3:
            cout << "Opcion 3" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
    }
}