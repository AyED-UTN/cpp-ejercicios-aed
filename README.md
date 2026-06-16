# Ejercicios de Algoritmos y Estructuras de Datos en C++

Este repositorio contiene ejercicios prácticos de **Algoritmos y Estructuras de Datos** preparados para ser resueltos en **C++**.

La idea es simple:

* Abrís un ejercicio.
* Leés el enunciado.
* Completás únicamente la parte indicada.
* Compilás y ejecutás.
* Verificás el resultado.

Todo el código auxiliar ya se encuentra preparado para que puedas concentrarte en el algoritmo y no en la infraestructura.

# Estructura del repositorio

```text
cpp-ejercicios-aed/
│
├── README.md
│
├── docs/
│   ├── instalacion-vscode.md
│   ├── instalar-compilador.md
│   └── primeros-pasos.md
│
├── ejercicios/
│   ├── vectores/
│   ├── busqueda/
│   ├── corte_control/
│   └── apareo/
│
└── templates/
```

---

# Inicio rápido

Si ya tenés instalado:

* Visual Studio Code
* Un compilador de C++
* Git

podés comenzar inmediatamente:

```bash
git clone https://github.com/AyED-UTN/cpp-ejercicios-aed.git

cd cpp-ejercicios-aed
```

Luego abrí la carpeta con Visual Studio Code.

---

# Cómo resolver un ejercicio

## 1. Elegir un ejercicio

Por ejemplo:

```text
ejercicios/vectores/O-1_tabla_posiciones
```

## 2. Leer el enunciado

Cada ejercicio contiene un README propio con:

* descripción del problema
* aclaraciones
* ejemplos
* restricciones

## 3. Completar el código

Dentro de `main.cpp` encontrarás una sección similar a:

```cpp
// ============================================================
// TU CÓDIGO VA AQUÍ
// ============================================================

// Resolver el ejercicio aquí

// ============================================================
// FIN DE TU CÓDIGO
// ============================================================
```

Intentá modificar únicamente esa sección.

## 4. Compilar y ejecutar

Desde la terminal:

```bash
g++ main.cpp -o programa
programa.exe
```

También podés utilizar las herramientas integradas de Visual Studio Code.

---

# Organización de los ejercicios

Los ejercicios están agrupados según el patrón algorítmico que practican.

| Tema             | Conceptos                             |
| ---------------- | ------------------------------------- |
| Vectores         | Inserción, eliminación, ordenamientos |
| Búsqueda         | Secuencial y binaria                  |
| Corte de control | Procesamiento por grupos              |
| Apareo           | Fusión de estructuras ordenadas       |

---

# Soluciones

Las soluciones de referencia se encuentran separadas de los ejercicios para fomentar la resolución individual antes de consultar una posible implementación.

Se recomienda intentar resolver cada ejercicio antes de revisar una solución.

---

# Documentación

La carpeta `docs/` contiene guías paso a paso para:

* instalar Visual Studio Code
* instalar un compilador de C++
* configurar el entorno
* compilar y ejecutar programas

---

# Contribuciones

Si encontrás errores en un enunciado, en el código base o en la documentación, podés abrir un issue o enviar un pull request.

Toda colaboración es bienvenida.

---

# Licencia

MIT License.
