#include <iostream>
#include <string>

using namespace std;

struct Producto
{
    int codigo;
    string descripcion;
};

void aparearCatalogos(
    Producto sucursal1[],
    int len1,
    Producto sucursal2[],
    int len2,
    Producto resultado[],
    int& lenResultado)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // Implementar Apareo
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

void mostrar(
    Producto productos[],
    int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << productos[i].codigo
             << " - "
             << productos[i].descripcion
             << endl;
    }
}

int main()
{
    Producto sucursal1[] =
    {
        {10, "Mouse"},
        {20, "Teclado"},
        {40, "Monitor"}
    };

    Producto sucursal2[] =
    {
        {15, "Parlantes"},
        {25, "Webcam"},
        {35, "Auriculares"}
    };

    int len1 = sizeof(sucursal1) / sizeof(Producto);
    int len2 = sizeof(sucursal2) / sizeof(Producto);

    Producto resultado[20];
    int lenResultado = 0;

    aparearCatalogos(
        sucursal1,
        len1,
        sucursal2,
        len2,
        resultado,
        lenResultado
    );

    mostrar(resultado, lenResultado);

    return 0;
}