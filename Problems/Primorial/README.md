El factorial de un entero positivo N, se define en principio como el producto de todos los numeros enteros positivos desde 1 (es decir, los numeros naturales) hasta N, y se indica como N!. Por ejemplo, 5! = 1  2  3  4  5 = 120. Tambien es posible definirlo mediante la relacion de
recurrencia:



\(N! = 1, si \thinspace N == 0\)
\(N! = (N-1)! * N, si \thinspace N == 0\)



El primorial de un entero positivo N se define de forma similar al factorial, pero solo se toma el producto de los numeros primos menores o iguales que N, y se indica como N#.



Dado un numero entero N, usted debe calcular el Primorial de N.



## Entrada



En la primera linea un entero 1 \leq T \leq 100 sera dado y representa la cantidad de casos a procesar. Por cada caso habra una linea de entrada que contendra un numero entero 2 \leq N \leq 50, para el cual usted debe calcular el primorial.



## Salida



Por cada caso debe imprimir una linea con el primorial encontrado.



## Ejemplo de entrada



```
3
2
4
10
```


## Ejemplo de salida



```
2
6
210
```


