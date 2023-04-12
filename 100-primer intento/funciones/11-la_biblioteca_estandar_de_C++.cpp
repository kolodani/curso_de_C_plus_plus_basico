#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto = "10.5";
    cout << stof(texto) + 2 << endl;
    cout << texto << endl;
    cout << texto.size();
}