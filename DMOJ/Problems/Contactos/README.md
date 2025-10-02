Vamos a hacer nuestra propia aplicacion de contactos! La aplicacion debe realizar dos tipos de operaciones:



add nombre, donde nombre es una cadena de caracteres, que denota un nombre de contacto. Este se debe almacenar como un nuevo contacto en la aplicacion.
find parcial, donde parcial es una cadena de caracteres. Se necesita saber la cantidad de contactos que comienzan con parcial e imprimir el recuento en una nueva linea.



Dado 1 \le N \le 10^5 operaciones secuenciales de adicion y busqueda, usted debe realizar cada operacion en orden.



Todas las cadenas estan formados por caracteres del alfabeto ingles escritos en minuscula y su tamano maximo es 20.



## Entrada



La primera linea contiene un unico numero entero N, que indica el numero de operaciones a realizar.



Cada i-esima linea de las N lineas siguientes contiene una operacion en una de las dos formas definidas anteriormente.



## Salida



Para cada operacion find parcial de busqueda, imprima el numero de nombres de contactos que empiezan con parcial en una nueva linea.



## Ejemplo de Entrada



```
4
add uclv
add uci
find uc
find upr
```


## Ejemplo de Salida



```
2
0
```


## Explicacion del Ejemplo



Anadimos un contacto llamado uclv.



Anadimos un contacto llamado uci.



Imprimir el numero de nombres de contactos que empiezan con uc. Actualmente hay dos nombres de contactos en la aplicacion y ambos comienzan con uc, por lo que imprimimos 2 en una nueva linea.



Imprimir el numero de nombres de contactos que empiezan con upr. Actualmente hay dos nombres de contactos en la aplicacion y no comienzan con upr, por lo que imprimimos 0 en una nueva linea.



