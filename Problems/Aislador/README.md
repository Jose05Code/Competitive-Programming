La compania Insumax produce aisladores termicos multicapas. Cada una de las i capas, i = 1, 2,..., n de un aislador esta caracterizada por un coeficiente de aislamiento a(i) positivo.  Las capas estan numeradas acorde a la direccion de la fuga del calor.



calor \rightarrow || a(1) | a(2) | ... | a(i) | a(i+1) | a(n) || \rightarrow



El coeficiente de aislamiento del aislador completo, A, es descrito por la suma de los coeficientes de aislamiento de sus capas. Ademas, el  coeficiente  A  se  eleva  si  una  capa,  con  un  coeficiente de aislamiento  mas pequeno es seguida por una capa con un coeficiente de aislamiento mas grande, acorde a la formula:



$$\displaystyle A = \sum_{i=1}^n a(i) + \sum_{i=1}^{n-1} \max (0,   a(i+1)  -  a(i))$$



Por ejemplo, el coeficiente de aislamiento del aislador de la forma



\rightarrow || 5 | 4 | 1 | 7 || \rightarrow es A = (5  +  4  +  1  +  7)  +  (7  -  1)  =  23



## Tarea



Escriba un programa el cual, para el coeficiente de aislamiento dado de las capas a(1), a(2), ..., a(n), determine un ordenamiento de las capas tal que el coeficiente de aislamiento del aislador completo sea maximizado.



## Entrada



En la primera linea esta el numero de capas N, 1 \le N \le 100,000. En las sucesivas N lineas hay coeficientes a(1), a(2), ..., a(n), uno por linea. Estos coeficientes son enteros que satisfacen la desigualdad 1 \le a(i) \le 10,000.



## Salida



En la primera y unica linea tu programa debe escribir  un  entero igual al valor mas grande posible del coeficiente de aislamiento A del aislador construido con las capas de coeficientes dadas, puestas en un orden particular.



## Ejemplo de Entrada



```
4
5
4
1
7
```


## Ejemplo de Salida



```
24
```


