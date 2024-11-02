"Leonardo de Pisa o Leonardo Pisano o Leonardo Bigollo (c. 1175 - 1250), tambien llamado Fibonacci, fue un matematico italiano famoso por la invencion de la sucesion de Fibonacci, surgida como consecuencia del estudio del crecimiento de las poblaciones de conejos.



La sucesion de Fibonacci es una serie de numeros enteros positivos de la cual sus primeros 2 numeros son 1 y 2, luego de eso, cada numero es el resultado de sumar los dos anteriores.
En este caso nos vamos a referir al Triangulo aritmetico de Fibonacci.



Es una ordenacion triangular de numeros enteros impares que utilizo Fibonacci para demostrar la identidad



13 + 23 + 33 + ... + n3 = (1 + 2 + 3 + ... + n)2



El triangulo



1



5 3



11 9 7



19 17 15 13



29 27 25 23 21



41 39 37 35 33 31



55 53 51 49 47 45 43



71 69 67 65 63 61 59 57



89 87 85 83 81 79 77 75 73



109 107 105 103 101 99 97 95 93 91



... ...   ... ...  ...  ...  ...  ...  ... ... ...



Fibonacci observo que cada k-esima fila es una progresion aritmetica cuyo valor medio es k2. Por consiguiente, la suma de los k terminos de la k-esima fila es \(k * k2 = k3\). La suma S de las primeras n filas consecutivas es S = 13 + 23 + 33 + ... + n3. Ademas Fibonacci conocia un resultado que la leyenda atribuye a Pitagoras: la suma de los primeros m enteros impares es igual a m2. De esta forma s = (1 + 2 + 3 + ... + n)2 porque en las primeras k filas hay 1 + 2 + 3 + ... + k numeros enteros impares



## Tarea



Escribe un programa que dado la k-esima fila del triangulo de Fibonacci imprima...



La suma de los elementos de la k-esima fila



El menor numero entero impar que forma parte de la k-esima fila



El mayor numero entero impar que esta en la k-esima fila.



## Entrada



Tu programa debera de leer del un solo numero entero 1 <= K <= 1 000 000



## Salida



Tu programa debera imprimir tres lineas. En cada una de ella debe de aparecer los valores pedidos en la tarea del problema.



## Ejemplo de Entrada



```
3
```


## Ejemplo de Salida



```
27
7
11
```


