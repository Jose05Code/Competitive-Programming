#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout.setf(ios::fixed);
   int x; cin >> x;
   string z; cin >> z;
    
   cout << (min(count(z.begin(), z.end(), 'L'), count(z.begin(), z.end(), 'R')))*2+ min(count(z.begin(), z.end(), 'U'), count(z.begin(), z.end(), 'D'))*2;

   



return 0;
}