#include <bits/stdc++.h>
using namespace std;
int main(){
   int x[3], y=1, j=1;
   for (int i=0; 3>i; i++){cin >> x[i];}
   for (int i=0; 2>i; i++){
        if (x[i]==x[i+1] || x[i]==x[i+2])y=y+1;
   }
   cout << y;
}