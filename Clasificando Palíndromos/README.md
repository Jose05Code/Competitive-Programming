Description



Un palindromo es una palabra que lee lo mismo hacia atras que hacia adelante. Algunos ejemplos de palindromo son abbcbba y bbbbb. En este problema, tambien definimos el concepto de bi-palindromo. Un bi-palindromo es una palabra que no es un palindromo en si, pero se puede dividir exactamente en dos palindromos. Algunos ejemplos de bi-palindromo son abbaccc y aaaab. En este problema, tenemos que clasificar algunas palabras dadas en la entrada en palindromo, bi-palindromo o no palindromo. Un no palindromo es una palabra que no es palindromo ni bi-palindromo. Escriba un programa para clasificar una lista de palabras de acuerdo con los criterios explicados anteriormente.



Input specification



La primera linea de la entrada contiene el numero 1 <= N <= 100 de palabras en la lista. Las siguientes N lineas contienen una cadena con no mas de 1000 caracteres en minuscula del alfabeto ingles, que representan cada palabra que debe clasificarse.



Output specification



La salida contiene N lineas. Cada linea contiene la clasificacion de cada palabra. Las posibles respuestas son palindrome, bi-palindrome y non-palindrome segun la explicacion anterior.



Sample input



```
5
abbcbba
bbbbb
abbaccc
aaaab
abcdefgh
```


Sample output



```
palindrome
palindrome
bi-palindrome
bi-palindrome
non-palindrome
```


