La secuencia de Fibonacci es una de las secuencias mas conocidas en las ciencias de la computacion. Esta secuencia define que el termino f(n) = f(n-1) + f(n-2) y los casos bases son f(0) = 0 y f(1) = 1.



En este problema, se ha definido otra secuencia de Fibonacci inspirada en la secuencia original, pero en dos dimensiones. La nueva secuencia recibe el nombre de Fibonacci 2D y define que el termino f(x, y) = f(x-1, y) + f(x, y-1) + f(x-1, y-1). Los casos base son f(x, 0) = f(0, y) = 1. Escriba un programa que calcule el valor de la secuencia de Fibonacci 2D dados los valores x e y.



## Entrada



La primera linea contiene un numero entero, 1 \le T \le 100, el numero de casos de prueba. Las siguientes T lineas contienen los enteros x e y para los cuales se desea calcular la respuesta del problema. En la entrada siempre se garantiza que los valores x e y estaran en el rango [0..1000].



## Salida



Para cada caso de prueba, imprima el valor de la secuencia f(x, y) para los valores de x e y dados en la entrada. Debido a que el valor de la funcion puede crecer muy rapido, imprima el valor de la respuesta modulo 1000000007.



## Ejemplo de entrada



```
3
3 3
100 0
45 45
```


## Ejemplo de salida



```
63
1
206914827
```


