#include<bits/stdc++.h>
using namespace std;
bool p;
int main() {
	int x,a,sum=0, k=-1; cin >> x;
	int y[x];
	for(int i=0; x>i; i++)
	cin >> y[i];
	cin >> a;
	int z[a][2];
	for(int i=0; a>i; i++ ){
		cin >> z[i][0];
		cin >> z[i][1];
	}
	
	for(int i=0; x>i; i++)
	sum += y[i];
	
	for(int i=0; a>i; i++)
	if(sum >= z[i][0] and sum <= z[i][1])
     p=1;
     
     if(p==0){
     	for(int i=0; a>i; i++)
     	if(sum < z[i][1]){
     	k = z[i][0];
     	break;
		 }
	 }
     
     if(p==1)
     cout << sum;
     else
     cout << k;
	
    return 0;
}