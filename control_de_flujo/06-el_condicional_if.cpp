#include <iostream>

using namespace std;

int main()
{
    int edad = 0;
    cout << "edad: ";
    cin >> edad;
    if (edad < 18 || edad > 40)
    {
        cout << "No puedes votar";
    }
    else
    {
        cout << "Puedes votar";
    }
}