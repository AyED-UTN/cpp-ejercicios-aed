#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string nombre;
    int documento;
};

void ordenarPorNombre(Persona personas[], int len)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // Utilizar Seleccion
    // Orden ascendente por nombre
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

void ordenarPorDocumento(Persona personas[], int len)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // Utilizar Insercion
    // Orden descendente por documento
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

void mostrar(Persona personas[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << personas[i].nombre
             << " - "
             << personas[i].documento
             << endl;
    }
}

int main()
{
    Persona personas[] =
    {
        {"Juan", 40123456},
        {"Ana", 38999888},
        {"Pedro", 42111222},
        {"Carlos", 37666555},
        {"Maria", 44555111}
    };

    int len = sizeof(personas) / sizeof(Persona);

    cout << "Ordenado por nombre:" << endl;

    ordenarPorNombre(personas, len);

    mostrar(personas, len);

    cout << endl;

    cout << "Ordenado por documento:" << endl;

    ordenarPorDocumento(personas, len);

    mostrar(personas, len);

    return 0;
}