#include <bits/stdc++.h>
using namespace std;
using namespace std ;
int aux=1, aux2;
int C [10000001];
int N =10000000;


void iniciar_criba () {
for( int i =0; i <= N ; i ++) C[i]= i ;
C[0]=-1; C[1]=-1;
for (int i=2;i*i<=N;i++)
if ( C[i]==i)
for (int j=i+i ;j<= N;j+=i)
C[j] = i ;

}
void fp (int X) {
if (X<=1) return ;
int a=1;
int Y= X/C[X];
while (C[X]==C[Y]) {
a++;
Y=Y/C[Y];
}
fp(Y);

aux*=++a;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
int cont=0, dp=0;
int x; cin >> x;
vector <int> io(x);
iniciar_criba() ;
for(int i=0 ; x>i; i++)
cin >> io[i];

sort(io.begin(), io.end());

for(int i=0; x>i; i++){
fp(io[i]);
if(cont<aux){
cont=aux;
dp=i;
}
aux=1;
}

cout << io[dp];

return 0;
}