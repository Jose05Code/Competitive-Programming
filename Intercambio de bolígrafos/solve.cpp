#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int x; cin >> x;
int a, b, c;
for(int i=0; x>i; i++){
    cin >> a >> b >> c;
    if((abs(c-b)<=a))
    cout << 1 << "\n";
    else
    cout << abs(c-b)-a << "\n";
}
}