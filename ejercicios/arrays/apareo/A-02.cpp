#include <iostream>

using namespace std;

void aparear(
    int vec1[],
    int len1,
    int vec2[],
    int len2,
    int resultado[],
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
    int vec[],
    int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << vec[i] << " ";
    }

    cout << endl;
}

int main()
{
    int vec1[] =
    {
        2,
        8,
        15,
        20
    };

    int vec2[] =
    {
        1,
        5,
        10,
        25,
        30
    };

    int len1 = sizeof(vec1) / sizeof(int);
    int len2 = sizeof(vec2) / sizeof(int);

    int resultado[20];
    int lenResultado = 0;

    aparear(
        vec1,
        len1,
        vec2,
        len2,
        resultado,
        lenResultado
    );

    mostrar(resultado, lenResultado);

    return 0;
}