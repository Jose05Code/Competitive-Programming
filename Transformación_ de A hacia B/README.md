Vasily tiene un numero a, el cual quiere convertir en un numero b. Para su proposito, el puede hacer dos tipos de operaciones:



multiplicar el numero actual por 2 (esto es, remplazar el numero x
por \(2*x\));
adicionar el digito 1 a la derecha del numero actual (esto es,
remplazar el numero x por \(10*x + 1\)).



Tu necesitas ayudar a Vasily a transformar el numero a en el numero b usando solo las operaciones descritas anteriormente, o buscar que es imposible hacerlo.



Note que en esta tarea no necesitas minimizar el numero de operaciones. Es suficiente con encontrar una via para transformar a en b.



## Entrada



La primera linea contiene dos enteros positivos a y b \((1 \le a < b \le 10^9)\) -- el numero que Vasily tiene y el numero que el quiere obtener.



## Salida



Si no existe una manera de transformar b desde a, imprima "NO" (sin las comillas).



De lo contrario imprima tres lineas. En la primera linea imprima "YES" (sin las comillas). La segunda linea debe tener un solo entero k -- la longitud de la secuencia transformada. En la tercera linea imprima la secuencia de transformaciones \(x_1, x_2, \ldots , x_k\), donde:



x_1 = a,
x_k = b,
x_i debe ser obtenido de \(x_{i - 1}\) usando cualquiera de las dos
operaciones descritas \((1 < i \le k)\).



Si hay multiples respuestas, imprima cualquiera de ellas.



## Ejemplo de entrada



```
1 21
```


## Ejemplo de salida



```
YES
3
1 2 21
```


