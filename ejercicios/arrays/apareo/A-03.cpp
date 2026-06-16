#include <iostream>
#include <string>

using namespace std;

struct Alumno
{
    int legajo;
    string nombre;
};

void aparearAlumnos(
    Alumno dep1[],
    int len1,
    Alumno dep2[],
    int len2,
    Alumno resultado[],
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
    Alumno alumnos[],
    int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << alumnos[i].legajo
             << " - "
             << alumnos[i].nombre
             << endl;
    }
}

int main()
{
    Alumno dep1[] =
    {
        {1001, "Ana"},
        {1005, "Juan"},
        {1010, "Pedro"}
    };

    Alumno dep2[] =
    {
        {1002, "Maria"},
        {1008, "Carlos"},
        {1015, "Lucia"}
    };

    int len1 = sizeof(dep1) / sizeof(Alumno);
    int len2 = sizeof(dep2) / sizeof(Alumno);

    Alumno resultado[20];
    int lenResultado = 0;

    aparearAlumnos(
        dep1,
        len1,
        dep2,
        len2,
        resultado,
        lenResultado
    );

    mostrar(resultado, lenResultado);

    return 0;
}