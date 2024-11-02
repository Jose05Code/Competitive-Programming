Bytezar se construye un numero como sigue:



Primer paso: se empieza con un numero N = 2008



Segundo paso: se escribe 2008 entre todos los digitos del numero anterior y se tiene



2 2008 0 2008 0 2008 8



Tercer paso: se inserta como antes 2008 entre todos los digitos del numero anterior y se tiene:



2200822008020080200882008020082200802008020088200802008220080200802008820088



(las 2008 en negrita solo se ponen para mostrar como se construye el numero en cada paso)



## Tarea



Escriba un programa que determine para un paso K dado y un numero N de comienzo, cuantas cifras tiene este numero. Ademas, se da un valor V (1 o 2) el cual si es 2 debe de decir si dicho numero es divisible por 3.



## Especificacion de la Entrada



La entrada estandar contiene en la primera linea tres numeros naturales V, K y N separados por un simple espacio.



## Especificacion de la Salida



La salida estandar contendra la cantidad de cifras C que tiene este numero en el paso K. Como C puede ser muy grande imprima este resultado modulo 34047161064. En la segunda linea aparecera la palabra "Si" o "No" sin las comillas, si este es divisible por 3, en caso del valor de V ser igual a 2.



## Restricciones y especificaciones



1 \le V \le 2
1 \le K \le 1 000
10 \le N \le 10 000 000
Si V = 2, K \le 40,
Para el 50 % de los puntos V = 2
Para el 50 % de los puntos V = 1
N no sera una potencia de 10, si V = 2



## Ejemplo #1 de Entrada



```
1 5 2008
```


## Ejemplo #1 de Salida



```
1876
```


## Explicacion



1876 digitos



## Ejemplo #2 de Entrada



```
2 5 2008
```


## Ejemplo #2 de Salida



```
1876
No
```


## Explicacion



1876 digitos. La suma de los digitos del quinto numero es 4690 el cual no es multiplo de 3 y en consecuencia no lo es el quinto paso.



## Ejemplo #3 de Entrada



```
2 7 4218
```


## Ejemplo #3 de Salida



```
46876
Si
```


## Explicacion



46876 digitos. La suma de los digitos del septimo numero es 175785 el cual es multiplo de 3 y en consecuencia es el septimo paso.



