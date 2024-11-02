Dada una secuencia de numeros enteros de tamano n y un numero k, debes imprimir el mayor numero entero x en el rango de [1; 10^9] que sea mayor o igual que exactamente k elementos de la secuencia dada.



Note que la secuencia puede tener elementos iguales.



Si no existe dicha x, imprime "-1" (sin las comillas).



## Entrada



La primera linea de la entrada consiste de dos numeros enteros n y k (1 \leq n \leq 2*10^5, 0 \leq k \leq n). La segunda linea de la entrada contiene los n numeros enteros que conforman la secuencia a_1, a_2, ..., a_n (1 \leq a_i \leq 10^9).



## Salida



Imprime el mayor numero entero x en el rango de [1; 10^9] que sea mayor o igual que exactamente k elementos de la secuencia dada.



Si no existe dicha x, imprime "-1" (sin las comillas).



## Ejemplo #1 de Entrada



```
7 4
3 7 5 1 10 3 20
```


## Ejemplo #1 de Salida



```
6
```


## Ejemplo #2 de Entrada



```
7 2
3 7 5 1 10 3 20
```


## Ejemplo #2 de Salida



```
-1
```


Notas



En el primer ejemplo los numeros 5 y 6 cumplen las condiciones establecidas, por tanto la respuesta es el mayor de estos dos numeros.



En el segundo caso ejemplo no puedes elegir un numero x que sea mayor o igual que solo 2 elementos de la secuencia porque va a ser tambien mayor o igual que 3 elementos de la secuencia.



