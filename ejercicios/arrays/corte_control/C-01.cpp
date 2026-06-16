#include <iostream>

using namespace std;

struct Venta
{
    int vendedor;
    double monto;
};

void resumenVentas(Venta ventas[], int len)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // Implementar Corte de Control por vendedor
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

int main()
{
    Venta ventas[] =
    {
        {101, 12000},
        {101, 18000},
        {101, 25000},

        {205, 15000},
        {205, 22000},

        {310, 5000},
        {310, 7000},
        {310, 9000},
        {310, 11000}
    };

    int len = sizeof(ventas) / sizeof(Venta);

    resumenVentas(ventas, len);

    return 0;
}