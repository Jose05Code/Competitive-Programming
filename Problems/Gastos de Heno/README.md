Cada dia el Granjero Juan alimenta las vacas con comida deliciosa de heno gourmet de calidad Premium. El entonces registra el numero de fardos en la siguiente linea de su cuaderno caro.



Cuando llega el tiempo, GJ se da cuenta que a el se le olvido registrar las fechas del consumo de heno. El debe calcular un numero  de totales diferentes de consumos sucesivos de heno con el proposito de resolver el rompecabezas de que consumo fue el mes de gastos.



GJ ha creado un conjunto de datos con N (4 \leq N \leq 500) dias convenientemente numerados 1...N de cuentas de fardos de heno H_i (1 \leq H_i \leq 1 000). El tiene un conjunto adicional de Q (1 \leq Q \leq 500) preguntas - cada pregunta es un par de enteros S_j y E_j (1 \leq S_j \leq E_j \leq N) que denotan los indices de inicio y fin de cuentas de algunos fardos. Su trabajo es sumar las cuentas de fardos de heno para los dias S_j...E_j (inclusive) y reportar una suma para cada pregunta.



## Entrada



*   Linea 1: Dos enteros separados por espacio: N y Q.



*   Lineas 2...N+1: La linea i+1 contiene una sola cuenta para el dia i: H_i.



*   Lineas N+2...N+Q+1: La linea j+N+1 describe la pregunta j con un par de enteros S_j y E_j.



## Ejemplo de Entrada



```
4 2
5
8
12
6
1 3
2 4
```


## Detalles de la Entrada



Cuatro dias; dos preguntas. Cuentas de fardos: 5, 8, 12, y 6. Dias de cuentas 1...3 y 2...4.



## Salida



*   Lineas 1...Q: La linea j del archivo de salida contiene un solo entero que es la suma de cuentas de fardos de heno para los dias entre S_j y E_j.



## Ejemplo de Salida



```
25
26
```


## Detalles de la Salida



```
Dia:        1  2  3  4 
Cuentas:    5  8 12  6

Pregunta 1...3: 5 + 8 + 12 = 25
Pregunta 2...4: 8 + 12 + 6 = 26
```


