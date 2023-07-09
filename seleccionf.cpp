#include "funciones.hpp"

void seleccion(int a[99], int n)
{

    int aux, min;

    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }

        aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }
}
