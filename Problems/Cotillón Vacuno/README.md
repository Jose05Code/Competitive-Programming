El cotillon vacuno, una danza famosa cada primavera, requiere que las 
vacas (mostradas como ">") y los toros (mostrados como "<")  se 
saluden unos a otros durante un baile. Esquematicamente, un par de 
reses que se estan saludando apropiadamente se muestra como esto "><". 
Algunas veces otro par de reses se pavonearan entre un par de vacas 
que se estan saludando "> >< <".



De hecho, algunas veces un mayor numero de vacas se mezclara en la 
sala de baile: "> >< < ><" (esto incluye un segundo conjunto de vacas 
que se estan saludando a la derecha). Configuraciones complejas pueden 
ser perfectamente formaciones legales de baile:



```
> > > >< < >< < >< >< >< <

| | | -- | -- | -- -- -- |
| | ------    |          |
| -------------          |
--------------------------
```


El Granjero Juan se da cuenta que una res de otro rebano algunas veces 
se mete en el grupo y lo desbalancea: "> >< < <><". Esto esta 
estrictamente prohibido: GJ quiere castigar a los intrusos.



GJ ha registrado informacion de hasta 500 vacas participando en 
formaciones de danza y se pregunta si la formacion esta apropiadamente 
balanceada (esto es, si todas las reses pueden ser apareadas de al 
menos una manera como saludandose apropiadamente par por par). El 
registro unicamente la direccion en que cada vaca estaba saludando sin 
espacios extra para ayudar a determinar que vaca estaba saludando a 
que toro, cadenas como esta muestran un ejemplo ilegal del parrafo 
anterior: ">><<<><". El quiere que usted escriba un programa que le 
diga a el si la formacion de baile es legal.



GJ tiene N (1 \le N \le 1\,000) registros de patrones P_i usando 
unicamente los caracteres '>' y '<' con longitud variable K_i (1 \le 
K_i \le 200). Imprima legal para aquellos patrones que incluyan pares 
apropiados de vacas que se saludan e illegal para aquellas que no.



## Entrada



Linea 1: Un solo entero: N



Lineas 2..N+1: La linea i contiene un entero seguido de un espacio y 
   una cadena de K caracteres '>' y '<': K_i y P_i



## Ejemplo de Entrada



```
2
6 >><<><
4 ><<>
```


## Salida



Lineas 1..N: La linea i contiene la palabra "legal" o "illegal" (sin 
   comillas, por supuesto) dependiendo si la entrada tiene una 
   configuracion legal de saludos



## Ejemplo de Salida



```
legal
illegal
```


