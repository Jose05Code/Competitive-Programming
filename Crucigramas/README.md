Como a todas las vacas, a Bessie la vaca le gusta resolver crucigramas. Desafortunadamente, su hermana Elsie ha derramado leche encima de su libro de crucigramas, borrando el texto y haciendo dificil que ella vea donde comienza la pista. Es su tarea ayudar a Bessie a recuperar la numeracion de las pistas.



Se le da un crucigrama sin numeros de pistas como una cuadricula N x M (3 \leq N \leq 50, 3 \leq M \leq 50). Algunas de las celdas estaran libres (tipicamente de color blanco) y algunas estaran bloqueadas (tipicamente de color negro). Dada esta distribucion, la numeracion de las pistas es un proceso simple que sigue dos pasos logicos:



Paso 1: Determinamos si cada celda comienza una pista horizontal o vertical. Si una celda comienza una pista horizontal, su celda vecina a la izquierda debe estar bloqueada o estar fuera de la cuadricula del crucigrama y las dos celdas a su derecha deben estar libres (esto es, una pista horizontal puede representar unicamente una palabra de tres o mas caracteres). Las reglas para una celda que comience una pista vertical son analogas: la celda encima debe estar bloqueada o fuera de la cuadricula, y las dos celdas debajo deben estar libres.



Paso 2: Asignamos un numero a cada celda que comience una pista. Se asignan numeros a las celdas secuencialmente comenzando con 1 en el mismo orden en que usted leeria un libro; a las celdas en la fila superior se le asignan numeros de izquierda a derecha, luego la segunda fila, etc. Solamente se asignan numeros a celdas que comiencen pistas.



Por ejemplo, considere la siguiente cuadricula, donde '.' indica una celda libre y '#' una celda bloqueada.



```
...
#..
...
..#
.##
```


Las celdas que pueden comenzar una pista horizontal o vertical estan marcadas con '!' a continuacion:



```
!!!
#..
!..
..#
.##
```


Si asignamos numeros a estas celdas, obtenemos lo siguiente:



```
123
#..
4..
..#
.##
```


Note que los crucigramas descritos en los datos e entrada pueden no satisfacer las restricciones tipicas de los crucigramas publicados. Por ejemplo, algunas celdas libres podrian no ser parte de ninguna pista.



## Entrada



La primera linea de la entrada contendra N y M separados por un espacio.



Cada una de las siguientes N lineas de la entrada describiran una fila de la cuadricula. Cada una contiene M caracteres, que son o '.' (una celda libre) o '#' (una celda bloqueada).



## Salida



En la primera linea de la salida, imprima el numero de pistas.



En cada una de las restantes lineas, imprima la fila y la columna dando la posicion de una sola pista (ordenadas como se describio anteriormente). La celda superior izquierda tiene posicion (1,1). La celda inferior derecha tiene posicion (N, M).



## Ejemplo de Entrada



```
5 3
...
#..
...
..#
.##
```


## Ejemplo de Salida



```
4
1 1
1 2
1 3
3 1
```


