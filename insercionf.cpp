#include "funciones.hpp"

void insercion(int *a, int n)
{
    int pos, aux;

    for (int i = 0; i < n; i++)
    {
        pos = i;
        aux = a[i];

        while (pos > 0 && a[pos - 1] > aux)
        {
            a[pos] = a[pos - 1];
            pos--;
        }

        a[pos] = aux;
    }

}