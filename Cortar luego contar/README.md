Se te da una cadena S de longitud N que consiste en letras minusculas del alfabeto ingles. Cortaremos esta cadena en una posicion para obtener dos cadenas X y Y. Aqui, queremos maximizar el numero de letras diferentes contenidas en ambas X y Y. Encuentra el mayor numero posible de letras diferentes contenidas en ambas X y Y cuando cortamos la cadena en la posicion optima.



## Entrada



La primera linea se encuentra un numero N. En la segunda linea esta la cadena S



## Restricciones



2 \leq N \leq 100
|S| = N
S consiste en letras minusculas del alfabeto ingles.



## Salida



Imprime el mayor numero posible de letras diferentes contenidas en ambas X y Y.



## Ejemplo de Entrada #1



```
6  
aabbca
```


## Ejemplo de Salida #1



```
2
```


## Explicaion Ejemplo #1



Si cortamos la cadena entre la tercera y cuarta letras para obtener X = aab y Y = bca, las letras contenidas en ambas X y Y son a y b. Nunca habra tres o mas letras diferentes contenidas en ambas X y Y, asi que la respuesta es 2.



## Ejemplo de Entrada #2



```
10  
aaaaaaaaaa
```


## Ejemplo de Salida #2



```
1
```


## Explicaion Ejemplo #2



Independientemente de como dividamos S, solo a estara contenida en ambas X y Y.



## Ejemplo de Entrada #3



```
45  
tgxgdqkyjzhyputjjtllptdfxocrylqfqjynmfbfucbir
```


## Ejemplo de Salida #3



```
9
```


