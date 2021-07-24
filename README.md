# Sort-algorithms-

## Algoritmos de ordenamiento

### Ordenamiento por inserción

• array_helpers.h : contiene descripciones de funciones auxiliares para manipular arreglos.

• array_helpers.c : contiene implementaciones de dichas funciones.

• sort_helpers.h : contiene descripciones de goes_before, array_is_sorted y swap

• sort_helpers.o : contiene implementaciones ilegibles de esas funciones (código compilado 
para la arquitectura x86-64)

Nota: Si usted esta trabajando en una computadora con arquitectura distinta a la 
mencionada, entonces seleccione y renombre uno de los siguientes archivos, 
sort_helpers.o_32 o sort_helpers.o_macos según la arquitectura de su máquina.

•sort.h : contiene descripción de la función insertion_sort

•sort.c : contiene una implementación incompleta de insertion_sort, falta implementar insert

•main.c : contiene el programa principal que carga un arreglo de números, luego lo ordena 
con la función insertion_sort y finalmente comprueba que el arreglo sea permutación 
ordenada del que cargó inicialmente.
- Compilación:

```
gcc -Wall -Werror -Wextra -pedantic -std=c99 -c array_helpers.c sort.c
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o sorter *.o main.c
```
- Ejecución:

```
./sorter ../input/example-unsorted.in
```
### Implementación top-down del algoritmo de ordenación rápida, primera parte:

• array_helpers.h : es el mismo que en el ejercicio anterior.

• array_helpers.c : también.

• sort_helpers.h : contiene además una descripción de partition

• sort_helpers.o : contiene implementaciones ilegibles de todo lo descripto en sort_helpers.h 
(código compilado para la arquitectura x86-64)

Nota: Si usted esta trabajando en una computadora con arquitectura distinta a la 
mencionada, entonces seleccione y renombre uno de los siguientes archivos, 
sort_helpers.o_32 o sort_helpers.o_macos segun la arquitectura de su maquina.

• sort.h : contiene descripción de la función quick_sort

• sort.c : contiene una implementación de quick_sort y quick_sort_rec

•main.c : contiene el programa principal que carga un arreglo de números, luego lo ordena 
con la función quick_sort y finalmente comprueba que el arreglo sea permutación ordenada 
del que cargó inicialmente.

- Compilación:

```
gcc -Wall -Werror -Wextra -pedantic -std=c99 -c array_helpers.c sort.c
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o sorter *.o main.c
```

- Ejecución:

```
./sorter ../input/example-unsorted.in
```

### Implementación top-down del algoritmo de ordenación rápida, segunda parte:

• sort_helpers.h : contiene descripciones de goes_before, array_is_sorted y swap

• sort_helpers.o : contiene implementaciones ilegibles de todo lo descripto en sort_helpers.h 
(código compilado para la arquitectura x86-64)

Nota: Si usted esta trabajando en una computadora con arquitectura distinta a la 
mencionada, entonces seleccione y renombre uno de los siguientes archivos, 
sort_helpers.o_32 o sort_helpers.o_macos segun la arquitectura de su maquina.

• sort.h : contiene descripción de la función quick_sort

• sort.c : contiene una implementacion de quick_sort_rec y partition
- Compilación:
```
gcc -Wall -Werror -Wextra -pedantic -std=c99 -c array_helpers.c sort.c
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o sorter *.o main.c
```
- Ejecución:
```
./sorter ../input/example-unsorted.in
```

Comparación de todos los algoritmos de ordenación implementados:

• sort_helpers.h : contiene además descripciones de manejadores de contadores
• sort_helpers.o : contiene implementaciones ilegibles de todo lo descripto en sort_helpers.h 
(código compilado para la arquitectura x86-64)

Nota: Si usted esta trabajando en una computadora con arquitectura distinta a la 
mencionada, entonces seleccione y renombre uno de los siguientes archivos, 
sort_helpers.o_32 o sort_helpers.o_macos segun la arquitectura de su maquina.

•sort.h : contiene descripción de las funciones de ordenación implementadas

•sort.c : contiene las implementaciones completas de los algoritmos de ordenación 

•main.c : contiene el programa principal que carga un arreglo de números, luego lo ordena 
uno de los algoritmos de ordenación implementados y muestra el tiempo de ejecución, 
número de comparaciones e intercambios realizados.

- Compilación:
```
gcc -Wall -Werror -Wextra -pedantic -std=c99 -c array_helpers.c sort.c
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o sorter *.o main.c
```
- Ejecución:
```
./sorter ../input/example-unsorted.in
```

## Materia: Algoritmos y estructura de datos 2
## Integrantes: Alejandro Spitale, Agustin Silva
