Dado un conjunto de n digitos, halla el mayor entero, sin ceros a la izquierda, que puede ser formado por estos digitos. Dicho numero tiene que ser multiplo de 2, de 3 y de 5. Por ejemplo: los numeros 30 y 0 son validos, sin embargo 030 y 00 no lo son.



Es permitido no usar todos los digitos del conjunto.



## Entrada



La primera linea de la entrada contiene al entero n \; (1 \leq n \leq 10^5).



La segunda linea de la entrada contiene n digitos d_1, d_2, \ldots, d_n, tal que 0 \leq d_i \leq 9, separados por un espacio.



## Salida



En una unica linea imprima la respuesta del problema. Si no existe un numero que cumpla lo requerido, imprima -1.



## Ejemplos



Entrada 1



```
1
0
```


Salida 1



```
0
```


Entrada 2



```
11
3 4 5 4 5 3 5 3 4 4 0
```


Salida 2



```
5554443330
```


Entrada 3



```
8
3 2 5 1 5 2 2 3
```


Salida 3



```
-1
```


