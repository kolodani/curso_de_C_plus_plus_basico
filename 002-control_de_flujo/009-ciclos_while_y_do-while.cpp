#include <iostream>

using namespace std;

int main()
{
    // while (true)
    // {
    //     char respuesta;
    //     cout << "Desea terminar el programa? (s/n): " << endl;
    //     cin >> respuesta;
    //     if (respuesta == 's')
    //     {
    //         cout << "El programa ha terminado" << endl;
    //         break;
    //     }
    // }
    do
    {
        char respuesta;
        cout << "Desea terminar el programa? (s/n): " << endl;
        cin >> respuesta;
        if (respuesta == 's')
        {
            cout << "El programa ha terminado" << endl;
            break;
        }
    } while (true);
}