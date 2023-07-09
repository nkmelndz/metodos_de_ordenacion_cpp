#include <iostream>
using namespace std;
#include "funciones.hpp"

int main()
{

    int a[99], n;

    cout << "ingrese el tamaño del arreglo: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese un valor: ";
        cin >> a[i];
    }

    intercambio(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}