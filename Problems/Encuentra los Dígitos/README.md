El ogro Ork tiene un numero entero n(0 \le n \le 10^9). El quiere saber cuantos digitos de n son divisores de n.



Un entero d es divisor de un entero n si se cumple que el resto de la division de n entre d es igual a 0.



## Entrada



La primera linea de entrada contiene un numero entero t, indicando la cantidad de casos de prueba.



Las siguientes t lineas contienen un numero entero n.



## Salida



Para cada caso de prueba, cuente el numero de digitos de n que son divisores de n. Imprima cada respuesta en una nueva linea.



## Ejemplo de Entrada



```
2
13
10113
```


## Ejemplo de Salida



```
1
4
```


## Explicacion del Ejemplo



El numero 13 esta compuesto por los digitos \{1, 3\} y es divisible por \{1\}, por lo tanto la salida es 1.



El numero 10113 esta compuesto por los digitos \{1, 0, 1, 1, 3\} y es divisible por \{1, 1, 1, 3\}, por lo tanto la salida es 4. La division por 0 no esta definida.



