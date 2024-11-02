En Pinar del Rio hay una plantacion de Tabaco con forma rectangular que mide R x C metros, (1 \leq R \leq 1000) and (1 \leq C \leq 1000) de modo que puede dividirse en celdas de un metro cuadrado. Cada celda tiene una semilla sembrada y cada semilla tiene un valor entero V (|V| \leq 10) asociado, que representa la altura a la cual la planta de tabaco puede crecer fuera de la semilla. En este campo es comun ver como algunas semillas no son tan inteligentes como para saber que la planta que crecera de la semilla, debe crecer hacia el sol. De este modo las semillas crecen en direccion subterranea y como resultado tienen valores negativos.



Don Alejandro es el dueno de la plantacion y quiere examinar algunas partes del campo. Para ello te hara una serie de Q (1 \leq Q \leq 10^5) consultas. En cada consulta el desea conocer la suma de las alturas de todas las plantas que crecen hacia el sol en un subrectangulo del campo. La esquina superior izquierda del campo tiene coordenadas [1, 1].



## Entrada



La primera linea contiene tres enteros R (1 \leq R \leq 1000), C (1 \leq C \leq 1000), and Q (1 \leq Q \leq 10^5) separados por un espacio. Las siguientes R lineas describen la informacion del campo. Cada linea contiene C enteros separados por espacios V_1, V_2, ..., V_c (|V_i| \leq 10) que representan el valor asociado a una semilla. Las siguientes Q lineas contienen la descripcion de una consulta. Esta consiste de cuatro enteros x_1, y_1, x_2, y_2 donde [x_1, y_1] es la esquina superior izquierda del subrectangulo y [x_2, y_2] es la esquina inferior derecha. Se garantiza que cada par representa una celda valida dentro del campo.



## Salida



Para cada consulta imprima una linea con la suma de las alturas de todas las plantas que crecen hacia el sol en el subrectangulo consultado.



## Ejemplo de entrada



```
3 3 3
3 1 -3
2 5 7
-1 2 -5
1 1 3 3
1 2 2 3
3 2 3 3
```


## Ejemplo de salida



```
20
13
2
```


