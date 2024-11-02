#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000000
#define MAXM 2 * MAXN + 1

int T[MAXM]; int a[MAXN]; int F[MAXM]; int R[MAXM];
int N, Q, ans;
void initmax ( int node =1 , int l =0 , int r =N -1) {
if ( l == r ) R[node] = a [ l ];
else {
int mi = (l+r)/2;
initmax(2*node,l,mi) ;
initmax(2*node+1,mi+1,r) ;
R[node]=max(R[2*node],R[2*node+1]);
    }
}

void initmin ( int node =1 , int l =0 , int r =N -1) {
if ( l == r ) T [ node ] = a [ l ];
else {
int mi = (l+r)/2;
initmin(2*node,l,mi) ;
initmin(2*node+1,mi+1,r) ;
T[node]=min(T[2*node],T[2*node+1]);
    }
}

int querymax ( int x , int y , int node =1 , int l =0 , int r =N -1) {
if ( r < x || l > y ) return -100000000;
if ( x <= l && r <= y ) {
return R[node];
} else {
int mi = (l+r) /2;
return max(querymax(x , y , 2 * node , l , mi ) , querymax ( x , y , 2 * node + 1 , mi + 1 , r )) ;
    }
}

int querymin ( int x , int y , int node =1 , int l =0 , int r =N -1) {
if ( r < x || l > y ) return 100000000;
if ( x <= l && r <= y ) {
return T [ node ];
} else {
int mi = (l+r) /2;
return min(querymin(x , y , 2 * node , l , mi ) , querymin ( x , y , 2 * node + 1 , mi + 1 , r )) ;
    }
}

int main(){
    int ini, fin;
    cin >> N >> Q;
    for ( int i = 0; i < N; i++ )
        cin >> a[i];

    initmax();
    initmin();

    for(int i=0; i<Q; i++){
    cin >> ini >> fin;
    ini--; fin--;

    cout<<querymax(ini, fin) - querymin(ini, fin)<<"\n";
    }


    return 0;
}