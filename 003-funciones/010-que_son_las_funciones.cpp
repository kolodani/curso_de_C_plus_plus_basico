#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

int multiplicar(int a, int b = 2)
{
    return a * b;
}

int main()
{
    cout << suma(2, 200) << endl;
    cout << multiplicar(200,4) << endl;
}