Despues de la caida del auge del programa espacial, Neil ha decidido montar un negocio de casas de juego por todo el pais. Uno de los juegos que renta es el de domino. El domino es un juego en el que hay varias fichas. Cada ficha esta dividida en dos secciones. Cada seccion contiene 0 o mas puntos. Un juego de domino se dice que es hasta el 6 si la cantidad maxima de puntos en una seccion es 6, se dice que es hasta el 9 si la cantidad maxima de puntos es 9, etc. Digamos que las dos secciones de una ficha conforman un par (A,B), siendo A y B la cantidad de puntos en cada seccion. Existe una y solo una ficha que contiene el par (A, B). Se entiende que el par (A, B) es a la vez el par (B, A). O sea, la ficha (A, B) es a la vez la ficha (B, A).



Nuestro problema es muy sencillo, algunos clubes han pedido dominos especiales. Su caracteristica especial es la cantidad maxima de puntos que contiene una seccion. No necesariamente es 6 o 9, un club puede pedir un domino especial, cuya cantidad maxima de puntos en una seccion puede ser desde 4 hasta 100. Sin embargo Neil, a la hora de recibir el domino tiene que contar la cantidad de fichas que contiene. El es increiblemente rapido contando las fichas, debe tener algun truco especial, pero le toma tiempo a veces darse cuenta de cuantas fichas tiene que tener el domino que esta recogiendo. Para eso, Neil solicita nuestra ayuda. Debemos darle un programa que, dada la cantidad maxima de puntos en una seccion de una ficha de domino, nos diga que cantidad total de fichas debe tener el juego de domino.



## DESCRIPCION DE LA ENTRADA:



La primera linea de la entrada, contiene un numero entero entre 1 y 100 000, que representa la cantidad de juegos de domino que Neil recogera hoy. Por cada juego de domino que recogera, la entrada contiene una linea con un numero entero entre 4 y 10 000 000, que representa la cantidad maxima de puntos que podra tener una seccion de una ficha del juego en cuestion.



NOTA: Ver que la cantidad maxima posible de puntos es 10 000 000, esta es la diferencia con la version I de este problema.



## DESCRIPCION DE LA SALIDA:



Por cada uno de los juegos de domino de la entrada, debera mostrar en una linea, un numero entero igual a la cantidad total de fichas del juego.



## ENTRADA DE EJEMPLO:



```
2
6
9
```


## SALIDA DE EJEMPLO:



```
28
55
```


