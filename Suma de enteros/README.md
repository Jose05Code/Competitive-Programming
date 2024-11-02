Los azucareros del centro le piden ayuda con el siguiente problema. Consideramos la suma de los primeros n enteros positivos (n > 0): 1 + 2 + 3 + ... + n. A esta suma se 
le anade el valor p de un numero tomado de entre los numeros 1, 2, 3, ..., n y el valor resultante es igual a S.



Escriba un programa de suma que introduzca el valor de S y encuentre cuanto es n y cual es el numero sumado p.



## Entrada



El entero S se introduce desde la entrada estandar.



## Salida



En una sola linea de la salida estandar, el programa debe mostrar dos enteros: los valores de n y p, separados exactamente por un espacio. Cuando el problema no tiene 
solucion, el programa debe mostrar un unico cero.



## Restricciones



S es un numero entero, 0 < S < 10^{17}. En aproximadamente el 50% de las pruebas S < 10^7 .



## Ejemplo #1 de Entrada



```
13
```


## Ejemplo #1 de Salida



```
4 3
```


## Ejemplo #2 de Entrada



```
10
```


## Ejemplo #2 de Salida



```
0
```


Explicacion del primer ejemplo: dado que S = 13. Consideremos la suma 1 + 2 + 3 + 4 = 10, donde n = 4. Si tomamos p = 3 (se trata de un numero tomado de entre los numeros 1, 2, 3, 4) y lo sumamos a 10 obtenemos 13. Por lo tanto, n = 4 y el numero anadido es 3.



