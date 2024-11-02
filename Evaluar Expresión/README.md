Pablo necesita evaluar una expresion que solo contiene
los operadores unarios ++ y -- en sus dos variantes
de pre/pos incremento/decremento y conocer al final
el valor de la variable. En otras palabras, Pablo
tiene una variable X que inicialmente tiene el valor
de cero y se le aplican sucesivamente estos operadores.
Ejemplo, X++;++X;X--; entonces X queda con el valor
de 1.



Su tarea consiste en hacer un programa que lea la 
expresion de Pablo y determine el valor con que queda
una vez evaluada.



## Entrada



La entrada consiste de una unica linea con la expresion
a evaluar, la misma es una cadena de texto de a lo
mas 400 caracteres.



## Salida



Imprima el entero con que queda el valor X una vez
evaluada la expresion.



Ejmplo 1 de entrada



```
X++;
```


Ejemplo 1 de salida



```
1
```


Ejmplo 2 de entrada



```
X++;X++;++X;X--;--X;X++;X++;
```


Ejemplo 2 de salida



```
3
```


