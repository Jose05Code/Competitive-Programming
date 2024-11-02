El Granjero Juan tiene N vacas con manchas y N vacas sin manchas. El acaba de terminar un curso de genetica bovina y esta convencido que las manchas en sus vacas son causadas por mutaciones en una sola ubicacion en el genoma bovino.



Con gran costo, el Granjero Juan obtiene los genomas de sus vacas. Cada genoma es una cadena de longitud M construida de cuatro caracteres A, C, G y T. Cuando el alinea los genomas de sus vacas, el obtiene una tabla como la mostrada a continuacion para N=3:



```
Posiciones:         1 2 3 4 5 6 7 ... M
Vaca con manchas 1: A A T C C C A ... T
Vaca con manchas 2: G A T T G C A ... A
Vaca con manchas 3: G G T C G C A ... A

Vaca sin manchas 1: A C T C C C A ... G
Vaca sin manchas 2: A C T C G C A ... T
Vaca sin manchas 3: A C T T C C A ... T
```


Viendo cuidadosamente esta tabla, el sospecha que la posicion 2 es una ubicacion potencial para el genoma que podria explicar las manchas. Esto es, mirando al caracter precisamente en esta posicion, el Granjero Juan puede predecir cual de sus vacas tienen manchas y cuales no (aqui, A o G significan con manchas y C sin manchas; T es irrelevante pues no aparece en ninguna de las vacas del Granjero Juan en posicion 2. La posicion 1 no es suficiente por si sola para explicar las manchas, pues A en esta posicion podria indicar una vaca con manchas o una vaca sin manchas.



Dados los genomas de las vacas del Granjero Juan, por favor cuente el numero de posiciones que podrian potencialmente, por si solas, explicar las manchas.



## Entrada



La primera linea de la entrada contiene N y M, ambos enteros positivos de tamano a lo mas 100. Cada una de las siguientes N lineas contiene una cadena de M caracteres; esas describen los genomas de las vacas con manchas. Las N lineas finales describen los genomas de las vacas sin manchas.



## Salida



Por favor cuente el numero de posiciones P (un entero en el rango 0 \leq P \leq M) en los genomas que podrian explicar potencialmente las manchas. Una posicion explica potencialmente las manchas si la propiedad de tener manchas puede ser predicha con precision entre la poblacion de vacas del Granjero Juan mirando simplemente a esta posicion en el genoma.



## Ejemplo de Entrada



```
3 8
AATCCCAT
GATTGCAA
GGTCGCAA
ACTCCCAG
ACTCGCAT
ACTTCCAT
```


## Ejemplo de Salida



```
1
```


