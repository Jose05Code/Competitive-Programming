Para cada natural N \ge 3 se define el grafo rueda de N rayos como el grafo W_n con N + 1 vertices v0, v1, v2, ..., vn tal que v0 es el centro de una circunferencia y v1, v2, ..., vn son N puntos diferentes de la circunferencia, ordenados segun el sentido horario. Las aristas del grafo son unicamente las del ciclo (v1, v2, ..., vn, v1) y las aristas rayos: es decir los incidentes en v0 que lo unen con cada uno de los vertices del ciclo. (Ver dibujos de W_3, W_4 y W_5 en la figura 1.)



Figura: Los grafos rueda con 3, 4 y 5 rayos.







## Tarea



Confeccione un programa para determinar cuantos ciclos de longitud K (K \ge 3) tiene Wn.



## Especificacion de la Entrada



La entrada estandar contiene en la primera un numero natural T. En las siguientes T lineas apareceran dos numeros naturales K y N, separados por un simple espacio, donde K es la cantidad de ciclos a buscar el el grafo W de N + 1 vertices.



## Especificacion de la Salida



La salida estandar contendra T lineas. En cada una de ellas debera aparecer la cantidad de ciclos encontrado.



## Restricciones y especificaciones



1 \le T \le 1 000
1 \le K, N \le 1 000 000 000
El 15 % de los puntos K \ge N + 1
El 15 % de los puntos K = N
El 15 % de los puntos 3 \le k \le N
El 15 % de los puntos K = N + 1
El 40 % de los puntos restantes otros casos
El 50 % de los casos T, N y K \le 100



## Ejemplo de Entrada



```
3
3 3
4 5
6 4
```


## Ejemplo de Salida



```
4
5
0
```


## Explicacion



Explicacion de la salida W(k, n)



W(3,3): El ciclo en la circunferencia y los cuatro ciclos (v0, v1, v2, v0), (v0, v2, v3, v0), (v0, v3, v1, v0),(v1,v2,v3,v1). Luego W3 tiene 4 ciclos de longitud 3.



W(4,5): Los cinco ciclos (v0, v1, v2, v3, v0), (v0, v2, v3, v4, v0), (v0, v3, v4, v5, v0), (v0, v4, v5, v1, v0),(v0, v5, v1, v2, v0). Luego W5 tiene 5 ciclos de longitud 4.



W(6,4): Hagase la figura de W4. Todos los ciclos de W4 tienen longitud a lo sumo longitud 5 (es decir no se pueden elegir mas de 5 aristas consecutivas de forma que cierren un ciclo). Luego W4 tiene 0 ciclo de longitud 6.



