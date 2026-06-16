#include <iostream>
#include <string>

using namespace std;

struct Equipo
{
    string nombre;
    int puntos;
};

void ordenarPorPuntos(Equipo equipos[], int len)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // Ordenar de mayor a menor cantidad de puntos
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

void mostrarEquipos(Equipo equipos[], int len)
{
    cout << endl;
    cout << "TABLA DE POSICIONES" << endl;
    cout << "-------------------" << endl;

    for(int i = 0; i < len; i++)
    {
        cout << equipos[i].nombre
             << " - "
             << equipos[i].puntos
             << " puntos"
             << endl;
    }
}

int main()
{
    Equipo equipos[] =
    {
        {"River", 58},
        {"Boca", 43},
        {"Racing", 51},
        {"Independiente", 39},
        {"San Lorenzo", 47}
    };

    int len = sizeof(equipos) / sizeof(Equipo);

    ordenarPorPuntos(equipos, len);

    mostrarEquipos(equipos, len);

    return 0;
}