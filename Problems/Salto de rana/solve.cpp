#include <bits/stdc++.h>
using namespace std;
vector <unsigned long long> fib(100000);

int mayor(vector <int> x){
    sort(x.begin(), x.end());
    return x.back();
}

void fibonacci(int n){
    fib[0]=0; fib[1]=1;
    for(int i=2; i <= n+1 ; i++)
    fib[i]=(fib[i-1]+fib[i-2])%1000000007;
}

int main(){
  int x; cin >> x;
  vector <int> a(x);
    for(int i=0; x>i;i++)
    cin >> a[i];

    fibonacci(mayor(a));

    for(int i=0; x>i; i++)
    cout << fib[a[i]+1] << '\n';
    

}