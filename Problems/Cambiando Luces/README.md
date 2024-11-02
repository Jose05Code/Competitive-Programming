El Granjero Juan trata de mantener a las vacas despiertas permitiendoles jugar 
Con juguetes intelectuales. Uno de los juguetes mas grandes es las luces del 
establo. Cada una de las N (2 \le N \le 500) pesebreras vacunas convenientemente 
numeradas 1...N tiene una colorida luz encima de ella.



Al comienzo de la tarde, todas las luces estan apagadas. Las vacas controlan 
las luces con un conjunto de N botones de pulsacion que cambian el estado de 
las luces; pulsar el boton i cambia el estado de la luz i de apagado a 
prendido o de prendido a apagado.



Las vacas leen y ejecutan una lista de M (1 \le M \le 2\,000) operaciones 
denotadas como uno de dos enteros \((0 \le \textrm{operacion} \le 1)\).



El primer tipo de operacion (denotada por un comando 0) incluye dos enteros 
subsecuentes S_i y E_i (1 \le S_i \le E_j \le N) que indican un boton inicial y 
un boton final. Ellas ejecutan la operacion pulsando cada boton entre el S_i y 
el E_i exactamente una vez.



El segundo tipo de operacion (denotado por un comando 1) le pide a las vacas 
contar cuantas luces estan prendidas en el rango dado por dos enteros S_i y 
E_i (1 \le S_i \le E_i \le N) los cuales indican el rango inclusivo en el cual 
las vacas deben contar el numero de luces que estan encendidas.



Ayude a GJ a asegurarse que las vacas esten obteniendo las respuestas 
correctas procesando la lista y produciendo las cuentas apropiadas.



## Entrada



Linea 1: Dos enteros separados por un espacio: N y M



Lineas 2..M+1: Cada linea representa una operacion con tres enteros separados por espacios: operacion, S_i, y E_i



## Ejemplo de Entrada



```
4 5
0 1 2
0 2 4
1 2 3
0 2 4
1 1 4
```


## Detalles de la Entrada



Cuatro luces, cinco comandos. Aqui esta la secuencia que deberia ser procesada:



```
            Luces
            1 2 3 4
  Inic:     O O O O   O = apagada  * = prendida
  0 1 2 ->  * * O O  cambiar las luces 1 y 2
  0 2 4 ->  * O * *
  1 2 3 ->  1        contar el numero de luces prendidas en el rango 2..3
  0 2 4 ->  * * O O  cambiar la luces 2, 3, y  4
  1 1 4 ->  2        contar el numero de luces prendidas en el rango 1..4
```


## Salida



Lineas 1..M: Para cada pregunta, imprima la cantidad como un entero en una sola linea.



## Ejemplo de Salida



```
1
2
```


