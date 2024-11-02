Todos los chicos guays de la ciudad quieren ser miembros del Bots y Androides (BAPC). Para convertirse en miembro del club, los aspirantes deben mostrar una hazana de sus habilidades con un robot casero que este programado para realizar algunos trucos.



Al igual que tu hermano mayor, quieres convertirte en miembro de el BAPC, asi que es hora de  encerrarse en el sotano de las aficiones y empezar a construir algunos robots.



Como tu hermano mayor ha utilizado casi todas las piezas para sus propios proyectos en el BAPC, tendras que ser creativo con lo que aun queda. Encuentras un brazo robotico que solo tiene un proposito: encajar objetos con forma de circulo en agujeros con forma cuadrada. No es exactamente lo que tenia en mente, pero tendra que que servir. Al fin y al cabo, solo te quedan cinco horas para solicitar tu ingreso en el BAPC.



El chip de memoria del brazo robotico parece estar borrado, pero por suerte conoces la interfaz de programacion de su procesador ARM. En primer lugar, el brazo robotico solo admite coordenadas enteras. En segundo lugar, cuando el brazo coge un objeto con forma de circulo, hay que calcular el cuadrado mas pequeno posible en el que podria caber el objeto, tras lo cual encontrara de forma autonoma encontrar un agujero cuadrado adecuado.



Tarea



Dada la ubicacion de un objeto con forma de circulo, calcula el cuadrado mas pequeno posible que encierre el objeto.



Entrada



La entrada consiste en:



Una linea que contiene dos enteros x e y (-10^9 \le x, y \le 10^9), las coordenadas del centro del circulo.
Una linea que contiene un entero r (1 \le r \le 10^9), el radio del circulo.



Salida



Salida de cuatro lineas, cada una de las cuales contiene dos enteros, que representan las coordenadas x e y de una de las esquinas del cuadrado. Las coordenadas deben imprimirse en el sentido de las agujas del reloj comenzando desde la esquina superior izquierda. Los lados del cuadrado deben ser paralelos a los ejes de coordenadas esto hace que la solucion sea unica.



## Ejemplos



Ejemplo de Entrada #1



```
-3 6
5
```


Ejemplo de Salida #1



```
-10 7
-2 13
4 5
-4 -1
```


Ejemplo de Entrada #2



```
0 0
10
```


Ejemplo de Salida #2



```
-14 -2
-2 14
14 2
2 -14
```


