#include<iostream>
using namespace std;
int main(){
string x; cin >> x;
int y = x.size() , f=0, j=0;
char q;

for (int i=0; y>i; i++ ){
 q = x[i];
if( q == 'a' || q == 'e' || q == 'i' || q == 'o' || q == 'u'){
f++;
if(f>j)
j=f;	
} else
f=0;
}cout << j;
}