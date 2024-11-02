Description



La web es una coleccion de miles de millones de documentos escritos de tal manera que se pueden citar utilizando hipervinculos, formando el llamado hipertexto. Dichos documentos o paginas web tienen muchos caracteres escritos en numerosos idiomas y cubren esencialmente todos los temas del conocimiento humano.







En la actualidad, la web es uno de los principales medios de difusion de informacion. Hoy en dia, las paginas web son contenedores de programas, archivos comprimidos, documentos de texto, archivos multimedia como imagenes, videos, animaciones y sonidos, entre otros. Se crean utilizando diferentes lenguajes de programacion y son compatibles con diferentes tipos de servidores web. Por lo tanto, no nos equivocariamos al afirmar que la web es un reflejo de las principales tendencias seguidas por la mayoria de los usuarios para el uso de la tecnologia de la informacion.



En el ultimo estudio realizado en los sitios web de la Universidad de Ciencias Informaticas, se detecto que mas del 99.75% de las paginas web se encuentran entre la profundidad logica 1 y 10. La profundidad logica de una pagina web esta relacionada con el numero minimo de veces que el usuario debe hacer clic en cualquier enlace para acceder a ella sin abandonar el sitio web y comenzando desde la pagina de inicio. La pagina de inicio de un sitio web tiene profundidad logica uno, y las paginas web a las que se puede acceder directamente desde la pagina de inicio tienen una profundidad logica dos, y asi sucesivamente.



El estudio, entre otras cosas, permitio desarrollar un mapa de navegacion para cada uno de los sitios web estudiados. Tambien un software capaz de determinar la profundidad logica de una pagina web, a partir del mapa de navegacion del sitio web al que pertenece. Se ha decidido probar el software en sitios que no contengan mas de 50 paginas web, y queremos que usted desarrolle un software similar para comparar los resultados obtenidos.



Input specification



La primera linea contiene un entero 1 <= T <= 100, que es el numero de casos de prueba (sitios web). Luego siguen T casos. Para cada caso de prueba, la primera linea contiene tres enteros: 1 <= N <= 50, 1 <= L <= 500 y 1 <= Q <= N, que denotan el numero de paginas web (convenientemente numeradas entre 1 y N, la pagina de inicio es siempre sera la numero uno), la cantidad de enlaces y la cantidad de pruebas, respectivamente. Siguiendo esta habran L lineas: cada linea consiste en dos numeros enteros separados por espacios 1 <= S <= N y 1 <= D <= N que denotan la fuente y el destino de un enlace. Siguiendo esta habran Q lineas: cada linea consiste en un numero entero 1 <= P <= N que denota alguna pagina web, seleccionada para la prueba.



Output specification



Para cada pagina web seleccionada para la prueba, debe imprimir una linea con un numero entero que represente la profundidad logica de la misma, o -1 si es imposible acceder a esa pagina web desde la pagina de inicio.



Sample input



```
2
5 5 3
1 2
1 3
1 4
3 5
5 1
1
3
5
3 3 3
1 2
2 3
1 3
1
2
3
```


Sample output



```
1
2
3
1
2
2
```


