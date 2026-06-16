# Primeros pasos

Una vez instalados:

* Visual Studio Code
* Un compilador de C++
* Git

ya podés comenzar a trabajar con los ejercicios.

---

# Clonar el repositorio

Abrí una terminal y ejecutá:

```bash
git clone https://github.com/AyED-UTN/cpp-ejercicios-aed.git

cd cpp-ejercicios-aed
```

---

# Abrir el proyecto

Desde la carpeta del repositorio:

```bash
code .
```

También podés abrir VS Code manualmente y seleccionar:

```text
Archivo → Abrir carpeta
```

---

# Elegir un ejercicio

Por ejemplo:

```text
ejercicios/vectores/O-1_tabla_posiciones
```

Abrí el archivo:

```text
main.cpp
```

> Para compilar y ejecutar correctamente, asegurate de tener abierto el archivo `main.cpp` del ejercicio que estás resolviendo.

---

# Compilar y ejecutar desde VS Code

El repositorio incluye una configuración preparada para Visual Studio Code.

### Compilar

Presioná:

```text
Ctrl + Shift + B
```

VS Code generará automáticamente el ejecutable correspondiente al archivo abierto.

Por ejemplo:

```text
main.cpp
↓
main.exe     (Windows)

main.cpp
↓
main         (Linux/macOS)
```

### Ejecutar

Presioná:

```text
F5
```

para ejecutar el programa.

---

# Compilar y ejecutar desde la terminal (opcional)

Si preferís utilizar la terminal manualmente:

### Compilar

```bash
g++ main.cpp -o main
```

En macOS también puede utilizarse:

```bash
clang++ main.cpp -o main
```

### Ejecutar

Windows:

```bash
main.exe
```

Linux y macOS:

```bash
./main
```

---

# Corregir errores

Si el compilador informa errores:

1. Leer el mensaje completo.
2. Identificar la línea indicada.
3. Corregir el código.
4. Volver a compilar.

Los errores de compilación son normales y forman parte del proceso de aprendizaje.

---

# Flujo de trabajo recomendado

Para cada ejercicio:

1. Leer el enunciado.
2. Pensar la solución en papel.
3. Identificar el patrón algorítmico involucrado.
4. Implementar la solución.
5. Compilar.
6. Ejecutar.
7. Verificar el resultado.

---

# Cuando te bloquees

Antes de revisar una solución:

* Releer el enunciado.
* Probar casos pequeños.
* Dibujar el estado del vector en cada paso.
* Utilizar el depurador o imprimir variables con `cout`.

La mayoría de los errores aparecen al seguir el algoritmo mentalmente paso a paso.
