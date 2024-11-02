Enumerar las posiciones de una tabla de 5 filas y 5 columnas de la siguiente forma: si el numero  i (1 \le i \le 25)  ha sido  asignado a una posicion  de  la tabla  con  coordenadas (x, y) entonces el numero i+1 puede ser asignado a la posicion de la matriz con coordenadas (z, w) acorde a una de las siguiente reglas:



(z, w) = (x+-3, y) 
(z, w) = (x, y+-3) 
(z, w) = (x+-2, y+-2)



Si la  posicion de la  tabla con coordenadas (2,2) es seleccionada  como la posicion de comienzo, o sea donde se coloca el numero 1 entonces la proxima posicion en la matriz a  la cual el numero 2 sera  asignado puede ser una de las siguientes posiciones con coordenadas: (2,5) o (5,2) o (4,4). Una enumeracion termina cuando todos los numeros del 1 al 25 fueron colocados en la tabla.



Imprima la cantidad de todas las enumeraciones posibles partiendo de una fila y columna dadas.



## Entrada



En una sola linea separados por un espacio en blanco la fila y columna iniciales donde comenzarian las enumeraciones



## Salida



la cantidad de todas las enumeraciones posibles partiendo de una fila y columna dadas



## Ejemplo de Entrada



```
2 2
```


## Ejemplo de Salida



```
412
```


