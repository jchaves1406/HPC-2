# HPC-2 - Taller algebra de matrices en C++ 

## *Eigen, Qtcreator y Cmake* 

Se realiza el desarrollo de ejercicios planteados en el lenguaje C++ usando el usando las funcionalidades de la biblioteca **`Eigen`** la cual implementa numerosas funciones para el cálculo de matrices en C++ tales como como factorización de matrices, métodos directos e iterativos para la resolución de sistemas lineales, transformada rápida de Fourier, etc. Para la realización del proyecto usaremos **`qtcreator`** como el entorno de desarrollo integrado (IDE) el cual está integrado con **`CMake`** dentro de su kit de desarrollo. Cmake es un sistema extensible de código abierto que administra el proceso de compilación en un sistema operativo y de manera independiente del compilador. A diferencia de muchos sistemas multiplataforma, CMake está diseñado para usarse junto con el entorno de compilación nativo. 

El desarrollo del programa para el cálculo de matrices de los ejercicios propuestos consta de un archivo principal (**`main.cpp`**) que será el contenedor de todas las funciones e implementación de los métodos necesarios. Además, cuenta con un archivo de texto (**`CMakelist.txt`**) lo que definirá el comportamiento de la compilación. El archivo CMakeLists de cada proyecto define el pull de instrucciones por parte del sistema de construcción en ese directorio específico. También define qué subdirectorios CMake debe manejar.  

### Prerrequisitos compilación en linux:  

* Instalación Build-Essentials: 

Los paquetes build-essentials son meta paquetes que son necesarios para compilar software. Incluyen el depurador GNU, la colección de compiladores g++/GNU y algunas herramientas y bibliotecas más que se requieren para compilar un programa. Por ejemplo, si necesita trabajar en un compilador C/C++, debe instalar meta paquetes esenciales en su sistema antes de iniciar la instalación del compilador C. Al instalar los paquetes build-essential, algunos otros paquetes como G++, dpkg-dev, GCC y make, etc. también se instalan en su sistema. 

`sudo apt install build-essentials`

* Instalación de qtcreator:

`sudo apt install qtcreator`

* Instalación de CMake:

`sudo apt install CMake`

* Instalación de la biblioteca Eigen:

`sudo apt install libeigen3-dev`

* Se crea el enlace simbolico de la biblioteca EIGEN

`ln -sf  /usr/include/eigen3/Eigen Eigen`

`ln -sf  /usr/include/eigen3/unsupported unsupported`

`sudo apt update`

Repositorio en git:

* Clonar repositorio:

`git clone https://github.com/jchaves1406/HPC-2.git`

* Importar proyecto a qtcreator por medio del Cmakelist y ejecutar.
