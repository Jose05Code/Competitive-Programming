Los numeros racionales son aquellos que se pueden expresar como la division de dos enteros a,b (a/b) con  b diferente de 0. Los numeros racionales tambien se pueden expresar como expresiones decimales, las cuales pueden ser finitas o infinitas periodicas. Ejemplo: 2 es finita, 1.3 es finita, 0.01 es finita, 1.111...111 es infinita (periodo 1), 3.2411232323...232323 es infinita (periodo 23). Estamos interesados en, dados A y B, saber si A/B es una expresion decimal finita o infinita periodica.



## Entrada



En la primera linea aparece un entero t (1 \leq t \leq 1000) que indica la cantidad de casos a procesar. En cada una de las siguientes t lineas aparece uno de los casos consistiendo de dos enteros separados por espacio, A y B respectivamente.



## Salida



Imprima t lineas, en cada una la respuesta al caso correspondiente. Imprima "1" si la fraccion A/B es una expresion decimal finita, o "0" si es una expresion decimal infinita periodica.



## Restricciones



1 \leq A \leq 10^{2000}, 1 \leq B \leq 10^{12}.
Para el 50% de los casos de prueba se cumple que 1 \leq A \leq 10^{12}.



## Ejemplo de Entrada



```
3
2 1
1 3
1 9
```


## Ejemplo de Salida



```
1
0
0
```


Explicacion: 2/1 = 2 (finita), 1/3 = 0.3333...33 (infinita), 1/9 = 0.111...11 (infinita)



