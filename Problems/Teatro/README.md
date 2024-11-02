Un nuevo teatro acaba de abrir sus puertas en la ciudad natal de Julio, y Julio y Jorge fueron naturalmente a verlo. La proyeccion de apertura se lleno hasta el ultimo lugar, y Julio se enfurecio porque los portavasos a ambos lados de su asiento estaban ocupados y no tenia donde poner su refresco.



Una fila en el teatro tiene N asientos. Hay un unico portavasos entre los asientos adyacentes, y tambien dos portavasos adicionales en ambos extremos de la fila. La excepcion a esto son los pares de asientos amorosos - no hay ningun portavasos entre ellos.



Tu tarea es ayudar a Julio. Dada la secuencia de letras que describen los asientos en alguna fila, y asumiendo que todos los asientos estan ocupados, busque el numero maximo de personas que pueden poner sus tazas en un portavasos justo al lado de su asiento.



La letra 'S' en la secuencia denota un asiento ordinario, y la letra 'L' denota un asiento de amor. Los asientos del amor siempre vienen en pares de asientos adyacentes. 
El siguiente diagrama corresponde a la secuencia "SLLLLSSLL", con asteriscos que indican los portavasos.



```
* S * L L * L L * S * S * L L *
```


En este ejemplo, al menos dos personas no podran poner sus tazas en los portavasos.



## ENTRADA



La primera linea de entrada contiene el numero entero N (1 \le N \le 50), numero de asientos en una fila. 
La siguiente linea contiene una secuencia de N letras 'L' o 'S', describiendo la fila como se ha indicado anteriormente.



## SALIDA



La primera y unica linea de salida debe contener el numero maximo de personas que pueden poner sus vasos en el portavasos justo al lado de ellos.



## Entrada ejemplo



```
3
SSS
```


## Salida ejemplo



```
3
```


## Entrada ejemplo



```
4
SLLS
```


## Salida ejemplo



```
4
```


## Entrada ejemplo



```
9
SLLLLSSLL
```


## Salida ejemplo



```
7
```


