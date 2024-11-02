El Granjero Juan debe llevar un paquete al Granjero Dan, y esta  preparando su viaje. Para mantener la paz, el le da un regalo sabroso a cada vaca con la que el se encuentra en su camino, y por supuesto, a GJ le gusta ahorrar, por lo tanto a el le gustaria encontrarse con tan pocas vacas como sea posible.



Considere el siguiente mapa:



```
        [2]--
      / |    \
     /1 |     \ 6
    /   |      \
 [1]   0|    --[3]
    \   |   /     \2
    4\  |  /4    [6]
      \ | /       /1
       [4]-----[5]
            3
```


GJ  ha dibujado un mapa de N (1 \le N \le 50,000) establos, conectados por M (1 \le  m \le  50,000) caminos bi-direccionales de vacas, cada uno con C_i (0 \le C_i \le 1,000) vacas  dentro de cada uno. Un camino de vacas conecta dos establos distintos, A_i y B_i (1 \le  A_i \le  N; 1 \le  B_i \le  N; A_i != B_i). Dos establos pueden estar conectados directamente por mas de un camino. El esta actualmente ubicado en el establo 1, y el Granjero Dan esta ubicado en el establo N.



El mejor camino que puede tomar el Granjero Juan es ir de 1 -> 2 -> 4  -> 5 -> 6, porque le costara  1 + 0 + 3 + 1 = 5 regalos.



Entrada



Linea 1: Dos enteros separados por espacio: N y M.
Lineas 2..M+1: Tres enteros separados por espacios: A_i , B_i y C_i.



Salida



Linea 1: El minimo numero de regalos que GJ debe llevar



Ejemplo de Entrada y Salida



## Entrada



```
6 8
4 5 3
2 4 0
4 1 4
2 1 1
5 6 1
3 6 2
3 2 6
3 4 4
```


## Salida



```
5
```


