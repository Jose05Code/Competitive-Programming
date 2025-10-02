Cierta prision contiene un largo pasillo de n celdas, cada una al lado de la otra. Cada celda tiene un prisionero y cada celda esta cerrada con llave. Una noche, el carcelero se aburre y decide jugar. Para la primera ronda del juego, toma un trago de whisky y luego corre por el pasillo para abrir cada celda. Para la ronda 2, toma un trago de whisky y luego corre por el pasillo cerrando cada dos celdas (celdas 2, 4, 6,...). Para la ronda 3, toma un trago de whisky y luego corre por el pasillo. Visita una de cada tres celdas (celdas 3, 6, 9,...). Si la celda esta cerrada, la abre; si esta abierta, la cierra. Repite esto durante n rondas, toma un trago final y se desmaya. Algunos presos, posiblemente cero, se dan cuenta de que sus celdas estan abiertas y el carcelero esta incapacitado. De inmediato escapan. Dada la cantidad de celdas, determine cuantos prisioneros escapan de la carcel.



## Entrada



La primera linea de entrada contiene un solo entero positivo T (1 \leq T \leq 1000). Este es el numero de lineas que siguen. Cada una de las siguientes lineas contiene un unico entero entre 5 y 100, inclusive, que es el numero de celdas n.



## Salida



Para cada linea, debe imprimir el numero de presos que escapan cuando la prision tiene n celdas.



## Ejemplo de Entrada



```
2
5
100
```


## Ejemplo de Salida



```
2
10
```


