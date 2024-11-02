Como casi todo el mundo sabe, cualquier numero entero no negativo se puede escribir como una suma de potencias de 2. Ademas, las computadoras de hoy en dia tienen una forma de hacer lo mismo con numeros enteros negativos, pero en este problema no es de lo que vamos a hablar. Considere cualquier numero entero positivo que entre en 64 bits; ?puedes calcular cual es la menor potencia de 2 involucrada en la representacion en base 2 de ese numero? Por ejemplo, para 4, la respuesta deberia ser 4, pero para 192, la respuesta es 64. Muy facil, ?verdad?



## Entrada



La entrada contiene varios casos de prueba y comienza con un numero T (T \leq 10^3) que indica cuantos casos de prueba hay. Siguen T lineas, cada una con un solo entero positivo en el rango [1, 2^63 - 1].



## Salida



Para cada caso de prueba, genere una sola linea con el numero solicitado: la menor potencia de 2 en la representacion binaria para el numero en el caso de prueba.



## Ejemplo de Entrada



```
2
4
192
```


## Ejemplo de Salida



```
4
64
```


