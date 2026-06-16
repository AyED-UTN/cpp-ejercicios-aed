#include <iostream>
#include <string>

using namespace std;

struct Alumno
{
    int legajo;
    string nombre;
    int edad;
    double promedio;
};

int busquedaBinaria(Alumno alumnos[], int len, int legajo)
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
    Alumno alumnos[] =
    {
        {1001, "Ana", 20, 8.5},
        {1005, "Juan", 22, 6.8},
        {1010, "Pedro", 21, 9.2},
        {1015, "Maria", 23, 7.1},
        {1020, "Carlos", 20, 5.9}
    };

    int len = sizeof(alumnos) / sizeof(Alumno);

    int legajoBuscado = 1010;

    int pos = busquedaBinaria(
        alumnos,
        len,
        legajoBuscado
    );

    if(pos != -1)
    {
        cout << alumnos[pos].nombre << endl;
        cout << "Edad: " << alumnos[pos].edad << endl;
        cout << "Promedio: " << alumnos[pos].promedio << endl;

        int mayores = 0;
        int menores = 0;

        for(int i = 0; i < len; i++)
        {
            if(alumnos[i].promedio > alumnos[pos].promedio)
                mayores++;

            if(alumnos[i].promedio < alumnos[pos].promedio)
                menores++;
        }

        cout << "Promedios mayores: "
             << mayores
             << endl;

        cout << "Promedios menores: "
             << menores
             << endl;
    }
    else
    {
        cout << "Alumno no encontrado" << endl;
    }

    return 0;
}