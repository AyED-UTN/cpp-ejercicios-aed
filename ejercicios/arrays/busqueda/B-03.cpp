#include <iostream>

using namespace std;

struct Factura
{
    int numero;
    double monto;
};

int busquedaBinaria(Factura facturas[], int len, int numero)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

void buscarPorRango(
    Factura facturas[],
    int len,
    double minimo,
    double maximo)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // Mostrar todas las facturas cuyo monto
    // este entre minimo y maximo
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

int main()
{
    Factura facturas[] =
    {
        {1001, 15000},
        {1005, 42000},
        {1010, 38000},
        {1015, 125000},
        {1020, 67000}
    };

    int len = sizeof(facturas) / sizeof(Factura);

    int numeroBuscado = 1010;

    int pos = busquedaBinaria(
        facturas,
        len,
        numeroBuscado
    );

    if(pos != -1)
    {
        cout << "Factura encontrada" << endl;
        cout << "Numero: "
             << facturas[pos].numero
             << endl;

        cout << "Monto: $"
             << facturas[pos].monto
             << endl;
    }

    cout << endl;

    cout << "Facturas entre $30000 y $70000"
         << endl;

    buscarPorRango(
        facturas,
        len,
        30000,
        70000
    );

    return 0;
}