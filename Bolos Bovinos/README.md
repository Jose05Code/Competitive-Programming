Las vacas no usan las bolas usuales de bolos cuando van a jugar bolos. A 
pesar de eso, cada una toma un numero (en el rango 1..99), y se alinean en 
un triangulo estandar de bolos como esto:



```
          7

        3   8

      8   1   0

    2   7   4   4

  4   5   2   6   5
```


Entonces las otras vacas recorren el triangulo comenzando desde su parte 
superior y se mueven "abajo" hacia una de las dos vacas adyacentes en 
diagonal hasta que se llega a la fila "de abajo". Las vacas obtienen 
como puntaje la suma de los numeros de las vacas visitadas en el camino. 
La vaca con el mas alto puntaje gana esa linea.
Dado un triangulo con N (1 \le N \le 350) filas, determine la suma mas 
grande que se pueda obtener.



## Entrada



Linea 1: Un solo entero, N



Lineas 2..N+1: La linea i+1 contiene i enteros separados por espacios que representan la fila i del triangulo.



## Salida



Linea 1: La suma mas grande que se puede obtener usando las reglas de
        recorrido.



## Ejemplo de Entrada



```
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
```


## Ejemplo de Salida



```
30
```


Detalles de la Salida



```
          7
         *
        3   8
       *
      8   1   0
       *
    2   7   4   4
       *
  4   5   2   6   5
```


La suma mas grande se puede obtener recorriendo las vacas como se muestra 
antes.



