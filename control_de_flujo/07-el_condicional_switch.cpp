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
        cout << "Opcion 1";
        break;
    case 2:
        cout << "Opcion 2";
        break;
    default:
        cout << "Esto no existe";
        break;
    }
    
}