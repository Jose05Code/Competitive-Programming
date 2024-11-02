## Descripcion



El Granjero Juan ha instalado un nuevo sistema de rodillos en contacto que le da una ventaja mecanica cuando levanta fardos de heno dentro del establo. El sistema fue manufacturado por la Compania Rube Goldberg Winch y tiene muchos rodillos. El sistema tiene una placa grande de metal con un numero de rodillos cuya ultima fuente de poder es el rodillo impulsor cuya ubicacion GJ ha denotado como el origen (0, 0). Este rodillo impulsa un rodillo que impulsa otro rodillo, etc. Etc. Hasta que se impulsa el rodillo final. GJ esta tratando de encontrar ese rodillo final y quiere saber cual es.







GJ ha tomado registro de las coordenadas xi, yi (-5000 \le xi \le 5000;  -5000 \le  yi  \le 5000) y los radios ri (3 \le ri \le 1024) de cada uno de los N (2 \le N \le 1080) rodillos.



## Tarea



Digale las coordenada (x, y) del ultimo rodillo en la cadena (el rodillo que es impulsado, pero que no impulsa ningun otro rodillo). Cada rodillo, excepto el impulsor, es impulsado exactamente por un solo rodillo.



## Entrada



*   Linea 1: Un solo entero: N.



*   Lineas 2... N+1: La linea i+1 describe el rodillo i con tres enteros separados por espacios: xi,  yi y ri.



## Ejemplo Entrada



```
3
0 0 30
30 40 20
-15 100 55
```


## Detalles de la Entrada



Tres rodillos. El primero esta en el origen con radio 30. El impulsa el rodillo en (30, 40) cuyo radio es 20. Este a su vez impulsa el tercer rodillo ubicado en (-15,100) con radio 55.



## Salida



*   Linea 1: Una sola linea con dos enteros separados por espacio que son respectivamente las coordenadas (x, y) del ultimo rodillo en la cadena de rodillos impulsados.



## Ejemplo Salida



```
-15 100
```


