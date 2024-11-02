



Recientemente Fry ha dejado su puesto como repartidor en Planet Express y ha comenzado a trabajar como arbitro de linea en la liga de futbol local. Fry tiene que determinar si en una jugada que termina en gol, puede haber un jugador en posicion  antirreglamentaria, y por lo tanto, invalidar el tanto.



Un jugador esta en posicion antirreglamentaria, si en el momento en que le pasan el balon el se encuentra a una distancia d de la porteria del otro equipo, y hay menos de dos jugadores del equipo rival a una distancia menor que d de dicha porteria.



Los arbitros cuentan con un sistema que les dice la distancia a la que esta cada jugador (del equipo que marca y del que estaba defendiendo) de la porteria, en el momento en el que se hace el pase al jugador que anota. Se garantiza que todas las distancias son diferentes. Fry te pide a ti que automatices el proceso de determinar si el gol es valido.



## Entrada



La primera  linea de la entrada contiene un entero x (1 \leq x \leq 11): el jugador del equipo atacante que marco el gol.



La segunda linea contiene once numeros enteros que representan la distancia desde cada jugador del equipo que marco hasta la porteria. El x-esimo numero es la distancia del jugador que  marco.



La tercera linea contiene otros once numeros enteros que representan la distancia desde cada jugador del equipo que defendia hasta la porteria.



## Salida



Imprima OFFSIDE si el jugador que marco estaba en posicion antirreglamentaria. De otra forma imprima GOAL.



## Entrada de ejemplo 1



```
9
20 7 17 5 1 15 10 19 6 16 13
11 0 4 9 14 2 21 3 12 18 8
```


## Salida de ejemplo 1



```
GOAL
```


## Entrada de ejemplo 2



```
5
10 19 4 12 1 11 21 16 5 17 7
9 15 8 6 3 20 14 13 18 0 2
```


## Salida de ejemplo 2



```
OFFSIDE
```


## Explicacion



En el primer ejemplo, el jugador que marco estaba a una distancia 6. Habian cuatro jugadores del equipo rival a una distancia menor de la porteria: a 0, 2, 3 y 4.



En el segundo caso, el jugador estaba a una distancia 1 de la porteria. Habia solo un jugador del equipo rival a una distancia menor que el de la porteria.



