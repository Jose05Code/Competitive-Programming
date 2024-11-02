Bessie esta participando en un concurso en un sitio web bien conocido (para las vacas obviamente). Esta vez ella quiere ganar el concurso y hara lo posible para lograrlo.



Dicho concurso consiste en n problemas, y Bessie resuelve el i-{th} problema en a_i unidades de tiempo (sus soluciones son siempre correctas, sino no fuese la vaca mas famosa de su rebano). En cualquier momento del tiempo ella puede estar pensando en la solucion de solamente un problema (o sea, no puede estar resolviendo dos o mas problemas a la misma vez). El tiempo que Bessie usa en enviar su solucion es despreciable. Bessie puede enviar cualquier cantidad de soluciones a la misma vez.



Desafortunadamente, hay demasiados participantes, y el sitio web no siempre estara funcionando. Bessie recibe la informacion de que el sitio web estara funcionando solamente durante m periodos de tiempo, el j-{th} periodo es representado por su momento de inicio l_j y el de finalizado r_j. Por supuesto, Bessie puede enviar sus soluciones solo cuando el sitio esta funcionando. En otras palabras, Bessie puede enviar su solucion en algun momento T si existe un periodo de tiempo x donde se cumpla que l_x \leq T  \leq r_x.



Bessie quiere saber su mejor resultado posible. Tenemos que decirle el menor momento del tiempo en el cual ella puede tener todas sus soluciones enviadas si ella actua optimamente o si es imposible hacerlo sin importar el orden en que resolvio los problemas.



## Entrada



La primera linea contiene un entero n(1 \leq n \leq 1000) - el numero de problemas. La segunda linea contiene n enteros a_i(1 \leq a_i \leq 10^5) - el tiempo que Bessie necesita para resolver el i-{th} problema.



La tercera linea contiene un entero m(0 \leq m \leq 1000) - el numero de periodos de tiempo cuando el sitio web esta funcionando. Luego le siguen m lineas representando estos periodos. La j-{th} linea contiene dos numeros l_j y r_j (1 \leq l_j < r_j \leq 10^5) - el tiempo de inicio y finalizacion del j-{th} periodo.



Se asegura que los periodos no se intersectan y estan dados en orden cronologico.



## Salida



Si Bessie puede resolver y enviar todos los problemas antes del final del concurso, imprima el momento de tiempo minimo en el cual ella puede tener todas las soluciones enviadas.
De esto no ser posible imprima "-1" (sin las comillas).



## Ejemplo #1 de Entrada



```
2
3 4
2
1 4
7 9
```


## Ejemplo #1 de Salida



```
7
```


## Ejemplo #2 de Entrada



```
1
5
1
1 4
```


## Ejemplo #2 de Salida



```
-1
```


## Explicacion



En el primer caso ejemplo, Bessie puede hacer lo siguiente: ella resuelve el segundo problema en 4 unidades de tiempo y lo envia inmediatamente. Entonces ella gasta 3 unidades de tiempo para resolver el primer problema y lo envia en 7 unidades de tiempo luego de haber empezado el concurso, porque en este momento el sitio web comienza a funcionar de nuevo.



En el segundo caso ejemplo, Bessie soluciona el ejercicio luego de que el sitio web haya dejado de funcionar por ultima vez.



