Los azucareros del centro tienen un arreglo A con n elementos enteros positivos. A ellos les gusta el orden, asi que quieren que su arreglo este ordenado. (Un arreglo ordenado es un arreglo que contiene elementos no decrecientes en el orden creciente de sus indices.) Ellos decidieron intercambiar dos elementos en el arreglo para hacerlo ordenado. Un intercambio se define como el intercambio entre dos elementos en posiciones distintas en el arreglo). Su tarea es determinar si esto puede ser hecho.



Si ellos no pueden ordenar el arreglo con un intercambio, imprima -1 .  Si el arreglo ya esta ordenado imprima 0. Si ellos pueden ordenar el arreglo con un intercambio, imprima 1



## Entrada



La primera linea de la entrada contiene un entero n. La segunda linea de la entrada contiene n enteros a_1, a_2 ... ,a_n del arreglo A, separados entre si por espacio en blanco.



## Salida



Imprima una linea simple que contenga un entero denotando la respuesta. La respuesta debe ser -1, 0,  o  1 .



## Restricciones



1 \le n \le 10^3
1 \le a_i \le 10^9



## Ejemplo 1 de Entrada



```
5
1 10 3 4 3
```


## Ejemplo 1 de Salida



```
1
```


Explicacion del ejemplo 1: Ya que el arreglo puede ser ordenado con un intercambio simple la respuesta es 1.



## Ejemplo 2 de Entrada



```
5
1 2 2 4 5
```


## Ejemplo 2 de Salida



```
0
```


Explicacion del ejemplo 2: El arreglo esta ordenado, por tanto la respuesta es sera un 0.



## Ejemplo 3 de Entrada



```
7
6 2 4 3 5 1 7
```


## Ejemplo 3 de Salida



```
-1
```


Explicacion del ejemplo 3: Ya que el arreglo no puede ser ordenado por un intercambio, la respuesta es -1.



