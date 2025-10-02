Bessie y Canmuu estan trabajando en equipo para lavar la gran pila de N (1 \leq N \leq 10,000) de platos sucios dejados despues del Festival Bovinato. Bessie esta lavando los platos; Canmuu los secara.



Cada plato tiene un numero serial unico en el rango 1..N. Al comienzo, los platos estan apilados en orden con el #1 en la parte superior y el #N en la parte inferior.



Bessie primero lava algun numero de platos D_i tomando uno de la partevsuperior de la pila de entrada, lavandolo, y luego apilandolo en el otro lado del fregadero (esto invierte el orden de esos platos).



Una vez que ella ha terminado de lavar esos platos, o lava otro conjunto de platos o Canmmu vuelve a secar D_i platos mientras Bessie se va a tomar su refrigerio bien ganado. El toma esos platos, uno por uno, de la pila que Bessie le dejo, seca los platos, y los apilas (nuevamente en orden inverso) en la pila de 'lavados'.



Canmu entonces o toma otro conjunto de platos para secar o se va a tomar un refrigerio mientras Bessie vuelve a lavar. Ellos repiten estas operaciones hasta que todos los platos esten lavados y secados.



?Cual es el orden final (de arriba hacia abajo) en el cual son apilados los platos limpios y secos?



Para ilustrar, supongamos que Bessie tiene una pila de 5 platos para lavar:



```
1 <-- arriba
2
3
4
5 <-- abajo
```


D_1 es 3, por lo tanto Bessie toma tres platos de la parte superior  de la pila, uno por uno, los lava, y los apila al otro lado del fregadero para que Canmuu los lave:



```
          Sin lavar
          | Lavados pero no secados
          | | Lavados y secados
          | | |
ARRIBA    1             
          2          2   
          3      ->  3      ->  3      ->    3   
          4          4          4 2        4 2 
ABAJO     5 - -      5 1 -      5 1 -      5 1 -
       Inicial      Plato 1    Plato 2    Plato 3
```


Canmuu seca dos de estos,  uno por uno, y los coloca en la pila limpia:



```
ARRIBA       3                   
             4 2    ->  4 2   ->  4   2
ABAJO        5 1 -      5 1 3     5 1 3

Bessie lava los dos platos finales:

ARRIBA                           5
          4   2  ->    4 2 ->    4 2
ABAJO     5 1 3      5 1 3     - 1 3
```


Finalmente, Canmmu seca los ultimos tres platos, apilandolos en el orden 
resultante mostrado a continuacion:



```
ARRIBA                                       1
                                  4          4
          5    ->      5  ->      5  ->      5
          4 2        4 2          2          2
ABAJO   - 1 3      - 1 3      - 1 3      - - 3
```


Entonces el orden final es: 1, 4, 5, 2, 3.



Cada una de las lineas principales de la entrada contiene ambos un comando, C_i (1 <= C_i <= 2) donde 1 indica que Bessie lava y 2 indica que Canmuu seca, y el numero de platos  D_i (1 \leq D_i \leq N) a ser lavados o secados.



Entrada



Linea 1: Un solo entero indicando el numero de platos a lavar y a secar: N
Lineas 2..??: Cada linea contiene un comando de platos a procesar: C_i y D_i



Ejemplo de Entrada



```
5
1 3
2 2
1 2
2 3
```


## Salida



Lineas 1..N: La linea i contiene el iesimo  plato lavado comenzando  desde arriba.



## Ejemplo de Salida



```
1
4
5
2
3
```


