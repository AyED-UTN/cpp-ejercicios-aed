# Instalar Git

Git permite descargar, actualizar y colaborar en repositorios de código.

Lo utilizaremos para clonar este repositorio y obtener los ejercicios.

---

# Paso 1: Descargar Git

Ingresá al sitio oficial:

https://git-scm.com/downloads

Seleccioná tu sistema operativo:

* Windows
* Linux
* macOS

El sitio mostrará las instrucciones correspondientes.

---

# Paso 2: Instalar

## Windows

Ejecutá el instalador descargado.

Podés aceptar todas las opciones por defecto.

---

## Linux

Muchas distribuciones ya incluyen Git instalado.

Si no está disponible, seguí las instrucciones de instalación sugeridas en:

https://git-scm.com/downloads/linux

---

## macOS

Git suele venir incluido junto con las herramientas de desarrollo de Apple.

Si no está instalado, el sistema te ofrecerá instalarlo automáticamente la primera vez que lo ejecutes desde una terminal.

También puede instalarse mediante Homebrew.

---

# Paso 3: Verificar la instalación

Abrí una terminal y ejecutá:

```bash
git --version
```

Deberías obtener una salida similar a:

```text
git version 2.x.x
```

---

# Probar Git

Intentá clonar el repositorio:

```bash
git clone https://github.com/AyED-UTN/cpp-ejercicios-aed.git
```

Si la descarga comienza correctamente, Git quedó instalado y listo para usar.

---

# Actualizar el repositorio

Si ya descargaste el repositorio anteriormente y querés obtener cambios nuevos:

```bash
git pull
```

---

# ¿Necesito crear una cuenta de GitHub?

No.

Para descargar y utilizar los ejercicios no es necesario tener una cuenta de GitHub.

Sólo necesitarás una cuenta si querés colaborar con el proyecto o subir cambios propios.
