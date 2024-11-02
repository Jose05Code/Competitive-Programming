El pequeno Lucas ha realizado una visita turistica a un pueblo cercano a Sydney, una ciudad de Australia. Da la casualidad de que la disposicion de las calles en el pueblo parece terriblemente familiar a la forma de un arbol binario perfecto de orden K. Un arbol binario perfecto de orden K consta de 2^K - 1 nodos dispuestos en K niveles (al igual que en la imagen). Cada nodo contiene un edificio etiquetado con un numero de casa. Ademas, todos los edificios excepto los del ultimo nivel tienen un hijo izquierdo y uno derecho (ver la imagen de nuevo).





Lucas visito todos los edificios del pueblo y anoto el orden exacto de entrada. Ahora quiere describirte como es el pueblo, pero no puede recordarlo bien. Por suerte, recuerda la forma en que visito los edificios:



Al principio, estaba parado frente al unico edificio en el primer nivel.

Si el edificio frente al que se encuentra actualmente tiene un hijo izquierdo que aun no ha visitado, se movera frente al hijo izquierdo.

Si el edificio no tiene un hijo izquierdo o ya lo visito, ingresara al edificio actual y escribira el numero de su casa en su papel.

Si ya ha visitado el edificio actual y el edificio tiene un hijo derecho, se movera frente al hijo derecho.

Si ha visitado el edificio actual y su hijo izquierdo y derecho, volvera al padre del edificio actual.



Despues de visitar los pueblos de las imagenes de arriba, el papel se veria asi: 2-1-3 para el primer pueblo y 1-6-4-3-5-2-7 para el segundo pueblo. Escriba un programa para ayudar a Lucas a reconstruir el orden de los numeros de las casas en cada nivel.



## Entrada



La primera linea de entrada contiene el numero entero K (1 \leq K \leq 10), el numero de niveles del pueblo que acaba de visitar Lucas. La segunda linea de entrada contiene 2^K - 1 enteros, la secuencia de numeros de casas en el papel de Lucas. Los numeros de las casas seran unicos y del intervalo [1, 2^K - 1].



## Salida



La salida debe constar de K lineas. La i-esima linea debe contener la secuencia de  numeros  de  casas  en  el i-esimo nivel del pueblo.



## Ejemplo de Entrada



```
3
1 6 4 3 5 2 7
```


## Ejemplo de Salida



```
3
6 2
1 4 5 7
```


