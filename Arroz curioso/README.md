A Dosberto se le acaba de caer la bandeja del comedor y todos los granos de arroz acaban de esparcirse por el piso. 
El piso puede ser considerado como un plano de dos dimensiones donde cada grano de arroz ocupa una posicion (x,y).
Pero Dosberto no se va a dejar vencer por eso (a pesar de que pase hambre) y como es curioso quiere saber si la forma en que quedaron los granos de arroz forman un poligono convexo.



Dado una secuencia de N puntos enteros diga si el poligono formado es convexo.



## Entrada



La primera linea tendra un entero T\leq10, la cantidad de casos de prueba.
Las siguientes 2T lineas tendran: N\leq50 , la cantidad de granos de arroz.
Siguen N pares de la forma (x,y) donde 0<x,y\leq10^7 y x,y son enteros. Estos pares son la secuencia de puntos del poligono en el sentido de las manecillas del reloj o contrario a las manecillas del reloj. Se garantiza que estos puntos forman un poligono no degenerado.
Al menos el 50% de los casos de pruebas cumplen que N\leq16.



## Salida



Para cada uno de los T casos diga \("Si"\) sin las comillas si el poligono dado es convexo y \("No"\) en caso contrario.



## Ejemplo de Entrada



```
2
8
1 2
2 2
2 1
4 2
3 4
2 5
2 4
1 3
7
1 2
2 1
4 1
6 2
5 3
3 4
1 3
```


## Ejemplo de Salida



```
No
Si
```






