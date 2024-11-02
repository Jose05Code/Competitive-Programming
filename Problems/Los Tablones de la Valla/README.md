Hay una cerca frente a la casa de David. La valla consta de n tablones del mismo ancho que van uno tras otro de izquierda a derecha. La altura del i-esimo tablon es h_i metros; tablones distintos pueden tener alturas distintas.





David ha comprado un piano elegante y esta pensando en como meterlo en la casa. Para llevar a cabo su plan, necesita tomar exactamente k tablones consecutivos de la cerca. Los tablones mas altos son mas dificiles de arrancar de la valla, por lo que David quiere encontrar k tablones consecutivos que la suma de sus alturas sea la minima posible.



Escriba un programa que encuentre los indices de k tablones consecutivos con altura total minima. Atencion, la cerca no esta alrededor de la casa de David, esta frente a la casa (en otras palabras, la cerca no es ciclica).



## Entrada



La primera linea de la entrada contiene los numeros enteros n y k (1 \leq n \leq 1.5*10^5, 1 \leq k \leq n) - el  numero de tablones en la cerca y el ancho del agujero para el piano. La segunda linea contiene la secuencia de numeros enteros h_1, h_2,..., h_n (1 \leq h_i \leq 100), donde h_i es la altura de la i-esima tabla de la cerca.



## Salida



Imprima tal entero j que la suma de las alturas de los tablones j, j+1,..., j+k-1 sea la minima posible. Si hay varias j de este tipo, imprima la menor.



## Ejemplo de Entrada



```
7 3
1 2 6 1 1 7 1
```


## Ejemplo de Salida



```
3
```


## Explicacion



En la muestra, su tarea es encontrar tres tablones consecutivos con la suma minima de alturas. En el caso dado, los tres tablones con indices 3, 4 y 5 tienen el atributo requerido, su altura total es 8.



