#include <iostream>

using namespace std;

bool estaOrdenado(int vec[], int len)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // Retornar true si el vector esta ordenado
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

int main()
{
    int numeros[] =
    {
        5,
        10,
        15,
        20,
        25,
        30
    };

    int len = sizeof(numeros) / sizeof(int);

    if(estaOrdenado(numeros, len))
    {
        cout << "El vector ya esta ordenado." << endl;
    }
    else
    {
        cout << "El vector NO esta ordenado." << endl;
    }

    return 0;
}