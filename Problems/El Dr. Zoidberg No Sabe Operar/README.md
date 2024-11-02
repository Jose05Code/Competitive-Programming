El doctor Dr. John Zoidberg esta operando a un extrano ser microscopico con forma de escalera. Este organismo esta formado por n pilas de celulas ordenadas una detras de otra, desde su "cabeza" (pila 1) hasta la cola (pila n).



Zoidberg solo puede tomar una celula de una pila, y agregarla a otra que este mas cercana a la cola. No importa el orden de las celulas dentro de una pila, ni cual celula esta en que pila: solo importa que al final el organismo tenga una celula en la primera pila, dos en la segunda, tres en la tercera, y asi sucesivamente hasta n en la n-esima.



Pero los que conocen al doctor saben que es muy descuidado, y puede que haya perdido algunas de las celulas del organismo antes de comenzar a operar. Entonces te corresponde a ti, su amigo de tanto tiempo, ayudarlo a saber si podra realizar la operacion sin que le falten o le sobren celulas.



## Entrada



La primera linea de la entrada contiene un entero n, que es la cantidad de pilas de celulas por las que esta formado el organismo.
La segunda linea contiene n enteros, a_1, a_2, \ldots, a_n los cuales representan la cantidad de celulas en cada pila antes de comenzar a operar.



## Salida



La salida contiene Si o No, dependiendo de si Zoidberg puede llevar a cabo la operacion satisfactoriamente o no.



## Limites



1 \leq n \leq 10^5

0 \leq a_i \leq 10^5



## Entrada de ejemplo 1



```
4
1 1 1 7
```


## Salida de ejemplo 1



```
No
```


## Entrada de ejemplo 2



```
3
3 2 1
```


## Salida de ejemplo 2



```
Si
```


## Entrada de ejemplo 3



```
4
1 2 0 3
```


## Salida de ejemplo 3



```
No
```


## Entrada de ejemplo 4



```
3
1 2 4
```


## Salida de ejemplo 4



```
No
```


## Explicacion



En el primer caso, ya hay una celula en la primera pila, pero no hay forma de hacer que en la segunda pila haya dos celulas.



En el segundo ejemplo, Zoidberg puede tomar dos celulas de la primera pila y colocarlas en la tercera.



En el tercer ejemplo, no se puede hacer que en la tercera pila haya tres celulas.



En el cuarto caso, cuando operamos al organismo, nos sobra una celula.



