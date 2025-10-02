?Quien dijo que los ratones son buenos? Los ratones son una fuerza destructiva irremediablemente. Muchos anos de construir una red electronica sin fisuras, y hoy en dia esta considerablemente arruinada por estos pequenos animales. No amo a los ratones, si quieres ponme un castigo.



Necesito hacer una transferencia de un punto de partida a un destino, pero varias de las redes de cable (que conectan los nodos intermedios) que podria usar, estan destruidas por ratones. El uso de un cable danado puede provocar la perdida de informacion. Por lo tanto, necesito encontrar la ruta mas corta, que solo use cables en buenas condiciones. ?Me pueden ayudar con mi tarea?



## Entrada



La primera linea contiene cinco numeros enteros: V, P y C (2 \leq V \leq 10; 1 \leq C \leq P \leq 10^5) donde V representa el numero de nodos, P representa el numero de cables entre ellos, y C el numero de cables danados. Seguido de S y T (1 \leq S, T \leq V) que representan el punto de partida y el destino respectivamente. Las siguientes lineas P son los caminos entre los nodos. Cada linea contiene tres numeros enteros N (1 \leq N \leq 10^5), X, Y (1 \leq X, Y \leq V) y un numero real D. Significa que hay un cable con ID igual a N entre X e Y, y con D metros de longitud. Las siguientes C lineas son los cables danados entre los nodos. Cada linea contiene un numero N_i. Significa que hay un cable con ID igual a N_i que esta danado.



## Salida



Imprime la longitud de la ruta mas corta, que solo utilizan cables en buen estado, redondeada al segundo decimal. Siempre habra una ruta posible, aunque no siempre sera unica.



## Ejemplo de Entrada



```
5 5 2 1 5
5 1 2 0.1
4 1 3 0.1
3 1 4 0.2
2 3 5 0.2
1 4 5 0.1
2
5
```


## Ejemplo de Salida



```
0.30
```


