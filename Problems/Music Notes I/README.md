GJ will teach your cows how perform a song. The song consists of N (1 \leq N \leq 100) notes, and ith note lasts B_i times.
Cows begin to perform the song at time 0; therefore touch them note 1 from time 0 to time B_1-1, the note 2 from time B_1 to time B_1 + B_2 - 1, etc.



Cows have lost interest in the song, because they feel it is long and boring.Therefore, to be sure that their cows are paying attention, GJ makes them Q (1 \leq Q \leq 1.000) questions of form,During the time T_i (T_i song length) what notes should be playing?. The cows need your collaboration to answer these questions.



As an example, consider a song with these specifications: the note 1 lasts 2 times, the note 2 lasts 1 time and the note 3 lasts 3 times.



```
NOTE    1  1  2  3  3  3
     +--+--+--+--+--+--+
TIME    0  1  2  3  4  5
```


## Input specification



Line  1: Two space-separated integers N and Q.



Lines 2 .. N+1: The line i+1 contains a single integer B_i.



Lines N + 2 .. N + Q+1:  The line N + i + 1 contains a single integer T_i.



## Output specification



The answer to each question.



## Sample input



```
3 5
2
1
3
2
3
4
0
1
```


## Sample output



```
2
3
3
1
1
```


