Marcos tiene un robot el cual esta situado en una grilla infinita. Inicialmente el robot empieza en la posicion (0,0). El robot puede procesar comandos. Los tipos de comandos son:



U - se mueve de la posicion (x,y) a la posicion (x,y+1);



D - se mueve de la posicion (x,y) a la posicion (x,y-1);



L - se mueve de la posicion (x,y) a la posicion (x-1,y);



R - se mueve de la posicion (x,y) a la posicion (x+1,y).



Marcos le introduce una secuencia de comandos al robot y este las ejecuta. Despues que el robot termina finaliza de nuevo en la posicion (0,0). Marcos se da cuenta que el robot es desobediente e ignora algunos comandos entonces decide  calcular el maximo numero de comandos que pudieron ser ejecutados correctamente por el robot. !Ayuda a Marcos con estos calculos!



Entrada



La primera linea contiene un numero n - el tamano de la secuencia entrada por Marcos (1 \leq n \leq 100). La segunda linea consiste en la secuencia entrada por Marcos. Esta es una cadena que consiste solamente de los caracteres U, D, L  o  R.



Salida



Imprima el numero maximo de comandos que pudieron ser ejecutados correctamente por el robot para que comience y termine en la posicion (0,0).



Ejemplo 1 de Entrada



```
4
LDUR
```


Ejemplo 1 de Salida



```
4
```


Ejemplo 2 de Entrada



```
5
RRRUU
```


Ejemplo 2 de Salida



```
0
```


Ejemplo 3 de Entrada



```
6
LRRLRR
```


Ejemplo 3 de Salida



```
4
```


