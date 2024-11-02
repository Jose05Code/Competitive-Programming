Al Sasha le encanta pasar tiempo en la naturaleza y, sobre todo, le encanta pasar tiempo en los bosques. El aire fresco y los hermosos sonidos hacen del bosque su lugar favorito. Sasha ha decidido pasar esta tarde en un bosque y, como es tan practica, tambien ha decidido atiborrarse de comida. Su vientre puede contener C  cantidad de comida.



Tendra la oportunidad de comer diversas frutas de la naturaleza (setas, castanas, bayas, etc.) mientras camina por el bosque. Todas las frutas son mutuamente diferentes y le gustaria comer tantas frutas diferentes como sea posible, pero con la condicion de que no coma en exceso. En otras palabras, el peso total de las frutas que ha comido no debe ser mayor que C. Ademas, cuando Sasha decide comenzar a comer, intenta comer todas las frutas siguientes si es posible comerlas y no comer en exceso. En el caso de que no tenga la capacidad de comerlo, simplemente continua con la siguiente fruta sin comer esa.



Dados N enteros que representan el peso y el orden en que Sasha encuentra las frutas ,determine la cantidad maxima de frutas diferentes que puede comer Sasha si empieza a comer en el momento optimo.



## Entrada:



La primera linea de entrada contiene dos numeros enteros N y C (1 \le N \le 1000, 1 \le C \le 1000000).



La segunda linea contiene N numeros enteros  w_{i} (1 \le w_{i} \le 1000)  que representan el peso de las frutas en el orden en que Sasha las encuentra.



Salida:



La primera y unica linea de salida debe contener la maxima cantidad posible de frutas diferentes que Sasha pueda comer.



## Entrada de ejemplo 1:



```
5 5
3 1 2 1 1
```


## Salida de ejemplo 1:



```
4
```


Si Sasha decide comenzar a comer en la primera fruta, entonces habra comido 3  frutas diferentes (3, 1, 1). Si comienza a comer en la segunda fruta, habra comido 4  frutas (1, 2, 1, 1) .



## Entrada de ejemplo 2:



```
7 5
1 5 4 3 2 1 1
```


## Entrada de ejemplo 2:



```
3
```


## Entrada de ejemplo 3:



```
5 10
3 2 5 4 3
```


## Salida de ejemplo 3:



```
3
```


