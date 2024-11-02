Bessie ama su pasto y ama apurarse para su sesion vespertina de ordeno. Ella ha dividido el pastizal en una cuadricula rectangular de R (1 \leq R \leq 100) filas y C (1 \leq C \leq 100) columnas y ha marcado los cuadrados como pasto o roca (ella no puede comer rocas y ni siquiera se parara en esos cuadrados). Bessie comienza su mapa en la ubicacion R_b, C_b y desea ir masticando en su camino, cuadrado por cuadrado, hasta el establo en la ubicacion (1,1) yendo por el camino mas corto posible. Ella se mueve de un cuadrado a cualquier otro de los cuatro cuadrados potencialmente adyacentes.
Aqui esta el mapa original [con rocas ('*'), pasto ('.'), el establo ('B'), y Bessie ('C' por vaCa) en fila 5, columna 6] y un mapa de camino con el camino optimo marcado con masticadas ('m'):



```
       Mapa               Camino Optimo de Masticadas
    1 2 3 4 5 6  <-col      1 2 3 4 5 6  <-col
  1 B . . . * .           1 B m m m * .
  2 . . * . . .           2 . . * m m m
  3 . * * . * .           3 . * * . * m
  4 . . * * * .           4 . . * * * m
  5 * . . * . C           5 * . . * . m
```


Bessie mastico 9 cuadrados.
Dado un mapa, determine cuantos cuadrados masticara Bessie en su camino mas corto al establo (no hay pasto para comer en el cuadrado del establo).



## Entrada



* Linea 1: Dos enteros separados por espacio: R y C.



* Lineas 2... R+1: La linea i+1 describe la fila i con C caracteres (sin espacios) como se ha descrito antes.



## Salida



* Linea 1: un solo entero que es el numero de cuadrados de pasto que Bessie mastica en su camino minimo de regreso al establo.



## Ejemplo de Entrada



```
5 6
B...*.
..*...
.**.*.
..***.
*..*.C
```


## Ejemplo de Salida



```
9
```


