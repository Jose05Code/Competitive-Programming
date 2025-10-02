#include <bits/stdc++.h>
using namespace std;

int main(){
        ios_base::sync_with_stdio(0);  cin.tie(0);
    unsigned long long int n; cin >> n;
    cout << ((n*(n-1)+1)*n)+(n*(n-1)+1)-1 <<"\n"<< n*(n-1)+1 << "\n" << (n*(n+1)+1)-2;

}