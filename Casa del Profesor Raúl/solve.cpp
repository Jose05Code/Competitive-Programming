#include <bits/stdc++.h>
using namespace std;
int main(){
unsigned long long int x, res=0; cin >> x;
unsigned long long int sum = (x*(x+1)/2);
for(int i=0; x>i ; i++){
    sum -= i;
    res += i;
    if(sum+i==res){
    sum=i;
    break;
    }
}

    cout << sum ;


return 0;
}