#include <bits/stdc++.h>
using namespace std;
int main(){
int n,c,e;
cin >> n >> c >> e;
string s;
cin >> s;
if(s[--c]==s[--e])
cout << 0;
else
cout << 1;
return 0;
}