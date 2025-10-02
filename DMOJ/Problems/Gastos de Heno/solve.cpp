#include <iostream>
using namespace std;

int T[1000001*2+1], a[1000001*2+1];
int N;
void init ( int node =1 , int l =0 , int r =N -1) {  
if ( l == r ) T[node] = a[l];
else {
int mi = ( l + r ) / 2;
init (2 * node , l , mi ) ;
init (2 * node + 1 , mi + 1 , r ); 
T[ node ] = ( T[2 * node ] + T[2 * node + 1] ) ;
}
}

int query ( int x , int y , int node =1 , int l =0 , int r =N -1) {
if ( r < x || l > y ) return 0;
if ( x <= l && r <= y ) {
return T[ node ];
} else {
int mi = ( l + r ) /2;
return query (x , y , 2 * node , l , mi ) + query ( x , y , 2 * node + 1 , mi + 1 , r ) ;
}
}

int main(){
int Q, a1, a2;
cin >> N >> Q;
for(int i=0; i<N; i++)
cin >> a[i];

init();

for(int i=0; i<Q; i++){
    cin >> a1 >> a2;
    cout << query(--a1, --a2) << "\n";
}


}