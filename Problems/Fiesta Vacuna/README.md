Una vaca de cada una de N granjas (1 \le N \le 1000) convenientemente 
numeradas 1..N van a ir a una gran fiesta vacuna que tendra lugar en la 
granja X (1 \le X \le N). Un total de  M (1 \le M \le 100,000) carreteras 
bidireccionales conectan pares de granjas; la carretera i requiere T_i (1 \le T_i \le 100)
unidades de tiempo para recorrerse. Algunas granjas estan 
conectadas por dos caminos; todas las granjas estan conectadas por al 
menos una carretera.



Despues que las vacas se reunen en la granja X, ellas se dan cuenta que 
cada vaca se olvido algo en su granja. Ellas deciden suspender la fiesta 
y enviar todas las vacas de regreso a sus granjas para traer lo que se 
les olvido. Todas las vacas usan rutas optimas para ir a sus granjas y 
devolverse a la fiesta. ?Cual es el minimo numero de unidades de tiempo 
que la fiesta debe ser suspendida?



## Entrada



Linea 1: Tres enteros separados por espacios, respectivamente: N, M y X.



Lineas 2..M+1: La linea i+1 describe la carretera i con tres enteros separados por espacios, respectivamente: A_i, B_i, y T_i. La carretera descrita conecta A_i y B_i y requiere T_i unidades de tiempo para recorrerse.



## Salida



Linea 1: Un entero: la minima cantidad de tiempo en que la fiesta debe ser suspendida.



## Ejemplo de Entrada



```
4 8 2
1 2 7
1 3 8
1 4 4
2 1 3
2 3 1
3 1 2
3 4 6
4 2 2
```


## Ejemplo de Salida



```
6
```


## Explicacion de la Entrada



Cuatro vacas; ocho caminos; la fiesta en la granja 2.



## Explicacion de la Salida



Existen carreteras directas que conectan a la granja 2 con las otras granjas( a la granja 1: 7 y 3; a la granja 3: 1; a la granja 4: 2). El camino mas largo tiene longitud 3, por lo tanto el viaje de ida y vuelta es de 6.



