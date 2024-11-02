!Alex clasifico a la IOI! y se esta preparando para viajar, el quiere saber cual es la forma mas barata de llegar a la IOI.



Alex conoce n aeropuertos. Todos los aeropuertos estan localizados en una linea recta y cada uno esta enumerado de 1 a n (de izquierda a derecha). La casa de Alex esta situada cerca del aeropuerto con id a y el lugar de la olimpiada esta situado cerca del aeropuerto con id b. Es posible que la casa de Alex y el lugar de la olimpiada esten cerca del mismo aeropuerto (es decir, que a sea igual a b tambien es posible).



Para llegar a la olimpiada Alex puede volar entre cualquier par de aeropuertos cualquier cantidad de veces, pero el tiene que empezar su ruta en el aeropuerto a y terminarla en el aeropuerto b.



Cada aeropuerto pertenece a una de dos companias. El costo del vuelo del aeropuerto i al aeropuerto j es 0 si ambos aeropuertos pertenecen a la misma compania y es |i - j| si pertenecen a companias distintas.



Calcula el costo minimo que Alex tiene que pagar para llegar a la olimpiada.



## Entrada



La primera linea de la entrada contiene los enteros n, a y b \; (1 \leq n \leq 10^5, 1 \leq a, b \leq n).



La segunda y ultima linea contiene una cadena de caracteres de tamano n, la cual consiste solamente de los caracteres 0 y 1. Si el i-esimo caracter en la cadena es 0 el aeropuerto pertenece a la primera compania, en otro caso el aeropuerto pertenece a la segunda compania.



## Salida



En una unica linea imprima el costo minimo que Alex tiene que pagar para llegar a la olimpiada.



## Ejemplos



Entrada 1



```
4 1 4
1010
```


Salida 1



```
1
```


Entrada 2



```
5 5 2
10110
```


Salida 2



```
0
```


## Explicacion de los ejemplos



En el primer ejemplo Alex puede volar al aeropuerto 2 primero y pagar |1 - 2| = 1 (porque los aeropuertos pertenecen a companias distintas) y luego volar del aeropuerto 2 al aeropuerto 4 gratis (ambos aeropuertos pertenecen a la misma compania). Por tanto el costo total es 1, esto es optimo.



En el segundo ejemplo Alex puede volar directamente del aeropuerto 5 al 2 gratis (ambos aeropuertos pertenecen a la misma compania), por lo que el costo total es 0.



