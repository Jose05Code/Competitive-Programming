#include <iostream>
using namespace std;
int main(){
cin.tie(0);ios_base::sync_with_stdio(false);
 int x; cin >> x;
if(x>0)
cout << (x*(x+1))/2;
else
cout <<((-x*(x-1))/2)+1;
}