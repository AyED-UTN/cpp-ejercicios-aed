#include <iostream>

using namespace std;

struct Factura
{
    int cliente;
    int numeroFactura;
    double monto;
};

void facturacionPorCliente(Factura facturas[], int len)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // Implementar Corte de Control por cliente
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

int main()
{
    Factura facturas[] =
    {
        {1001, 1, 12000},
        {1001, 2, 18000},
        {1001, 3, 22000},

        {1002, 4, 35000},
        {1002, 5, 28000},

        {1003, 6, 15000},
        {1003, 7, 10000},
        {1003, 8, 12000},
        {1003, 9, 9000}
    };

    int len = sizeof(facturas) / sizeof(Factura);

    facturacionPorCliente(facturas, len);

    return 0;
}