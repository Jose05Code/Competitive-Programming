Tommy ha dispuesto cuidadosamente N (1 \leq N \leq 10.000) montones de bloques, cada uno de la misma altura.  Sin embargo los italianos mueven algunos de los bloques entre los montones, por lo que sus alturas ya no son necesariamente las mismas.  Dadas las nuevas alturas de todos los montones, ayuda a Tommy a determinar el numero minimo de bloques que debe mover para que todos los montones vuelvan a tener la misma altura original. Se garantiza que al final la cantidad de bloques puede ser la misma en todos los montones.



## Entrada



La primera linea contiene un entero N (1 \leq N \leq 10.000) el numero de montones de bloques



Las lineas 2..N+1: Cada linea contiene el numero de bloques en una unica pila (un numero entero en el rango 1...10.000).



## Salida



Un numero entero: El numero minimo de bloques que se necesita mover para que los montones vuelvan a tener la misma altura.



## Ejemplos



Entrada 1



```
4
2
10
7
1
```


Salida 1



```
7
```


Explicacion
Deben moverse cinco bloques de la segunda pila(3 a la pila 1 y 2 a la pila 4) y dos bloques de la tercera pila(los dos bloques a la pila 4). Quedando cinco bloques en todas las pilas.



