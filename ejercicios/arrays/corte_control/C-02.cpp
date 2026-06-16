#include <iostream>
#include <string>

using namespace std;

struct Alumno
{
    string curso;
    string nombre;
    double promedio;
};

void informeCursos(Alumno alumnos[], int len)
{
    // ====================================================
    // TU CODIGO VA AQUI
    // Implementar Corte de Control por curso
    // ====================================================



    // ====================================================
    // FIN DE TU CODIGO
    // ====================================================
}

int main()
{
    Alumno alumnos[] =
    {
        {"K1051", "Ana", 8},
        {"K1051", "Juan", 7},
        {"K1051", "Pedro", 4},

        {"K1052", "Maria", 9},
        {"K1052", "Carlos", 5},

        {"K1053", "Lucia", 10},
        {"K1053", "Martin", 8},
        {"K1053", "Sofia", 6}
    };

    int len = sizeof(alumnos) / sizeof(Alumno);

    informeCursos(alumnos, len);

    return 0;
}