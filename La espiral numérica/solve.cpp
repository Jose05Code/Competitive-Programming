#include <bits/stdc++.h>

using namespace std;
int main(){
    long int x, sum=0; cin>>x;
    while (x>0){
        sum = sum + (((x*x)+((x*x)-(2*(x-1)))));
        x=x-2;
    }
    cout << sum-1 << "\n";
    }