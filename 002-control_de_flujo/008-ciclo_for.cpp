#include <iostream>

using namespace std;

int main()
{
    int lista[] = {100, 200, 300, 400, 500};
    int limite = 10;
    int tamano = sizeof(lista) / sizeof(lista[0]);
    cout << "Limite: ";
    cin >> limite;
    for (int i = 0; i < limite; i++)
    {
        cout << i << endl;
    }
    for (int i = 0; i < tamano; i++)
    {
        cout << lista[i] * 2<< endl;
        if (lista[i] == 300)
        {
            break;
        }
    }
    int numeros[] = {1,2,3,4,5,6,7,8};
    int cantidad = sizeof(numeros) / sizeof(numeros[0]);
    for (int i = 0; i < cantidad; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            cout << numeros[i] << endl;
        }
    }
}