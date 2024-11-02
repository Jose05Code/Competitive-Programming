El granjero Juan disfruta mucho jugar al ajedrez. Sin embargo, la mayor parte del tiempo el esta solo. Por esta razon, el quiere ensenar a sus vacas a jugar al ajedrez. Las vacas no son muy inteligentes. Por esta razon, el quiere ensenarles a las vacas como mover el caballo, una pieza muy importante en el ajedrez. Primeramente, el les enseno a las vacas que el caballo siempre se mueve siguiendo el patron de la letra L. Luego les asigno la primera tarea a las vacas, como se explica a continuacion. Dadas dos casillas diferentes de un tablero de ajedrez, ubicadas en filas distintas, determine si es posible alcanzar la casilla de la fila superior iniciando en la casilla de la fila inferior. Sin embargo, cada movimiento del caballo tiene cierta restriccion. El caballo solo se puede mover desde la fila actual hacia una fila superior.



## Entrada



La entrada contiene cuatro enteros: x_1, y_1, x_2, y_2. La casilla x_1 y_1 representa la casilla inicial en la fila inferior. La casilla x_2 y_2 representa la casilla en la fila superior, a la cual se debe llegar. Siempre se garantiza que ambas casillas estan ubicadas en filas diferentes. En este problema, las casillas del ajedrez se enumeran desde 1 hasta 8 para las filas y las columnas. La casilla ubicada en la esquina inferior izquierda del tablero tiene coordenadas [1,1] y la casilla ubicada en la esquina superior derecha tiene coordenadas [8,8]. Para las casillas dadas en la entrada, la coordenada `x' representa las columnas y la coordenada `y' representa las filas del tablero de ajedrez.



## Salida



La salida contiene la cadena ''yes'' (sin las comillas) si la casilla con coordenadas x_2 y_2 puede ser visitada iniciando en la casilla con coordenadas x_1 y_1 o la cadena ''no'' en caso contrario.



## Ejemplo de entrada



```
1 1 8 8
```


## Ejemplo de salida



```
yes
```


