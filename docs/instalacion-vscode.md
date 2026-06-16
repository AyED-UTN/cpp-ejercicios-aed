# Instalación de Visual Studio Code

## ¿Qué es Visual Studio Code?

Visual Studio Code (VS Code) es un editor de código gratuito desarrollado por Microsoft.

Lo utilizaremos para escribir, compilar y ejecutar programas en C++.

---

# Paso 1: Descargar VS Code

Ingresá al sitio oficial:

https://code.visualstudio.com/

El sitio detectará automáticamente tu sistema operativo y te ofrecerá la descarga correspondiente.

También podés seleccionar manualmente la versión para:

* Windows
* Linux
* macOS

---

# Paso 2: Instalar

## Windows

Ejecutá el instalador descargado.

Durante la instalación se recomienda marcar las siguientes opciones:

* Add "Open with Code" action
* Add to PATH
* Register Code as an editor

Luego presioná **Next** hasta finalizar la instalación.

---

## Linux

Dependiendo de tu distribución, podés:

* Descargar el paquete desde el sitio oficial.
* Instalarlo mediante el gestor de paquetes de tu distribución.

Por ejemplo:

Ubuntu / Debian:

```bash
sudo apt install code
```

Fedora:

```bash
sudo dnf install code
```

Arch Linux:

```bash
sudo pacman -S code
```

Si esos comandos no funcionan en tu distribución, seguí las instrucciones oficiales de Microsoft.

---

## macOS

Descargá la versión para macOS desde el sitio oficial y mové la aplicación a la carpeta **Applications**.

También puede instalarse mediante Homebrew:

```bash
brew install --cask visual-studio-code
```

---

# Paso 3: Abrir VS Code

Una vez instalado:

* Abrí Visual Studio Code.
* Verificá que la aplicación inicie correctamente.

---

# Paso 4: Instalar la extensión de C++

En VS Code:

1. Abrí la pestaña Extensions (`Ctrl + Shift + X` o `Cmd + Shift + X` en macOS).
2. Buscá:

```text
C/C++
```

3. Instalá la extensión desarrollada por Microsoft.

Autor:

```text
Microsoft
```

---

# Verificación

Creá un archivo llamado:

```text
hola.cpp
```

Con el siguiente contenido:

```cpp
#include <iostream>

using namespace std;

int main()
{
    cout << "Hola Mundo" << endl;
    return 0;
}
```

Guardá el archivo.

Todavía no va a compilar porque falta instalar un compilador de C++.

Eso lo haremos en la siguiente guía.
