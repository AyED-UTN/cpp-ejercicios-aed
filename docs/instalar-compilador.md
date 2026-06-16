# Instalar un compilador de C++

VS Code es solamente un editor de código.

Para convertir un programa escrito en C++ en un ejecutable necesitás instalar un compilador.

Seguí la sección correspondiente a tu sistema operativo.

---

# Windows

## Instalar MSYS2

Descargá e instalá MSYS2:

https://www.msys2.org/

Se recomienda dejar la ruta por defecto:

```text
C:\msys64
```

---

## Actualizar paquetes

Abrí **MSYS2 UCRT64** y ejecutá:

```bash
pacman -Syu
```

Si solicita reiniciar la terminal, cerrala y abrila nuevamente.

Volvé a ejecutar:

```bash
pacman -Syu
```

hasta que no queden actualizaciones pendientes.

---

## Instalar GCC

```bash
pacman -S mingw-w64-ucrt-x86_64-gcc
```

---

## Agregar GCC al PATH

Agregar:

```text
C:\msys64\ucrt64\bin
```

a la variable PATH del sistema.

---

## Verificación

```bash
g++ --version
```

---

# Linux

## Ubuntu / Debian

```bash
sudo apt update
sudo apt install build-essential
```

---

## Fedora

```bash
sudo dnf install gcc-c++
```

---

## Arch Linux

```bash
sudo pacman -S gcc
```

---

## Verificación

```bash
g++ --version
```

---

# macOS

Apple incluye un compilador compatible con C++ mediante las herramientas de desarrollo de Xcode.

Instalar:

```bash
xcode-select --install
```

---

## Verificación

```bash
clang++ --version
```

o

```bash
g++ --version
```

dependiendo de la configuración del sistema.

---

# Prueba final

Crear un archivo llamado:

```cpp
#include <iostream>

using namespace std;

int main()
{
    cout << "Hola Mundo" << endl;
    return 0;
}
```

Compilar:

```bash
g++ hola.cpp -o hola
```

Si utilizás macOS y el comando anterior no funciona:

```bash
clang++ hola.cpp -o hola
```

Ejecutar:

Windows:

```bash
hola.exe
```

Linux y macOS:

```bash
./hola
```
