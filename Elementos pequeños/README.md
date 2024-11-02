Dada una permutacion P_1, \dots, P_N de 1, \dots, N. Encuentra el numero de enteros i (1 \leq i \leq N) que cumplan la siguiente condicion:



Para cualquier entero j (1 \leq j \leq i), P_i \leq P_j



## Limites



1 \leq N \leq 2 \cdot 10^5



P_1, \dots, P_N es una permutacion de 1, \dots, N.



Todos los valores de entrada son enteros.



## Entrada



La primera linea de entrada contiene un entero N - El tamano de la permutacion.



La segunda linea de entrada contiene N enteros - La permutacion P.



## Salida



Imprime el numero de enteros i que satisfacen la condicion.



## Entrada de ejemplo 1:



```
5
4 2 5 1 3
```


## Salida de ejemplo 1:



```
3
```


i = 1, 2, y 4 cumplen la condicion, pero i = 3 no. Por ejemplo, P_i > P_j se mantiene para j = 1.



Similarmente, i = 5 no cumple la condicion tampoco. Asi que existen tres enteros que cumplen la condicion.



## Entrada de ejemplo 2:



```
4
4 3 2 1
```


## Salida de ejemplo 2:



```
4
```


Todos los enteros i (1 \leq i \leq N) cumplen la condicion.



## Entrada de ejemplo 3



```
6
1 2 3 4 5 6
```


## Salida de ejemplo 3



```
1
```


Solo i = 1 cumple la condicion.



## Entrada de ejemplo 4



```
8
5 7 4 2 6 8 1 3
```


## Salida de ejemplo 4



```
4
```


## Entrada de ejemplo 5



```
1
1
```


## Salida de ejemplo 5



```
1
```


