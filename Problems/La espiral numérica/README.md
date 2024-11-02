Los azucareros del centro encontraron muy interesante construir una espiral numerica 
dado un entero positivo impar N. Es posible construir una espiral numerica comenzando 
con el numero 1 en el centro de un tablero de NxN y llenando las casillas restantes 
en el sentido de las manecillas del reloj hasta llegar a N^2.  La siguiente figura 
representa la espiral obtenida para N = 5.



```
21  22   23  24  25
20  7   8    9   10
19  6   1    2   11
18  5   4    3   12
17  16  15   14  13
```


Su tarea es hacer un programa que entrado el entero positivo impar N calcule la suma 
de los elementos de la mayor diagonal que contiene a N^2.



## Entrada



La primera linea de entrada aparecera el entero N (1 \leq N \leq 2000001).



## Salida



En la primera linea de la salida debe aparecer la suma de los elementos de la mayor 
diagonal que contiene a N^2.



## Ejemplo #1 de Entrada



```
3
```


## Ejemplo #1 de Salida



```
15
```


## Ejemplo #2 de Entrada



```
5
```


## Ejemplo #2 de Salida



```
57
```


Explicacion: En el primer ejemplo el resultado se obtiene al sumar 5+1+9=15 mientras que en el segundo es
17+5+1+9+25=57



