#include <iostream>
#include <string>

using namespace std;

struct Producto
{
    string nombre;
    double precio;
    int stock;
};

int buscarProducto(Producto productos[], int len, string nombre)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // Busqueda secuencial por nombre
    // Retornar posicion o -1
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

int contarMasCaros(Producto productos[], int len, double precioReferencia)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

int main()
{
    Producto productos[] =
    {
        {"Mouse", 15000, 8},
        {"Teclado", 32000, 3},
        {"Monitor", 250000, 10},
        {"Auriculares", 45000, 2},
        {"Webcam", 38000, 7}
    };

    int len = sizeof(productos) / sizeof(Producto);

    string buscado = "Teclado";

    int pos = buscarProducto(productos, len, buscado);

    if(pos != -1)
    {
        cout << "Producto encontrado" << endl;
        cout << productos[pos].nombre << endl;
        cout << "Precio: $" << productos[pos].precio << endl;
        cout << "Stock: " << productos[pos].stock << endl;

        if(productos[pos].stock < 5)
        {
            cout << "Stock bajo" << endl;
        }

        cout << "Productos mas caros: "
             << contarMasCaros(productos,
                               len,
                               productos[pos].precio)
             << endl;
    }
    else
    {
        cout << "Producto no encontrado" << endl;
    }

    return 0;
}