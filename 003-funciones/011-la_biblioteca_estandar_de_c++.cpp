#include <iostream>
#include <string>

using namespace std;

int main()
{
    // char texto[] = { 'H', 'o', 'l', 'a', ' ', 'm', 'u', 'n', 'd', 'o', '!' };
    string texto = "Hola mundo!";
    cout << texto << endl;
    cout << texto.size() << endl;
    string texto2 = "10";
    cout << texto2 << endl;
    cout << stoi(texto2) + 1 << endl;
    string texto3 = "10.5";
    cout << texto3 << endl;
    cout << stof(texto3) + 0.5 << endl;
}