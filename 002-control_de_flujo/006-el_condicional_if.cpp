#include <iostream>

using namespace std;

int main()
{
    // bool resultado = true && true;
    // bool resultado = false || true;
    // bool resultado = !true;
    // cout << resultado;

    int edad = 0;
    cout << "Edad: ";
    cin >> edad;
    // if (edad < 18)
    // {
    //     cout << "No puedes votar" << endl;
    // } else if (edad > 40)
    // {
    //     cout << "No puedes votar" << endl;
    //     }
    // else {
    //     cout << "Puedes votar" << endl;
    // }
    if (edad < 18 || edad > 40)
    {
        cout << "No puedes votar" << endl;
    }
    else {
        cout << "Puedes votar" << endl;
    }
}