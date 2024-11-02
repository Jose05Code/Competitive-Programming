Dada una secuencia A de N numeros.



Encuentre la suma de las diferencias entre cada par de numeros elevadas al cuadrado:



\sum_{i=2}^{N}\sum_{j=1}^{i-1}(A_i-A_j)^2



## Constantes



(2 \leq n \leq 3 \times 10^{5})
(|A_i| \leq 200)
Todos los valores de la entrada son enteros



## Entrada



La entrada se dara en el siguiente formato:



N

A_1 A_2 ... A_N



## Salida



Imprima la respuesta.



## Ejemplo #1 de Entrada



```
3
2 8 4
```


## Ejemplo #1 de Salida



```
56
```


Tenemos \sum_{i=2}^{N}\sum_{j=1}^{i-1}(A_i-A_j)^2 = (8-2)^2 + (4-2)^2 + (4-8)^2 = 56.



## Ejemplo #2 de Entrada



```
5
-5 8 9 -4 -3
```


## Ejemplo #2 de Salida



```
950
```


