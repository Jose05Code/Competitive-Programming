#include <bits/stdc++.h>
using namespace std;
void menor(int x , int y , int z){
	set <int> suma;
	suma.insert(x+y);
	suma.insert(x+z);
	suma.insert(x+y+z);
	suma.insert(z+y);
	suma.insert(x);
	suma.insert(y);
	suma.insert(z);
	for(int i=1; 9>i; i++)
	if(*find(suma.begin(), suma.end(), i)!=i){
	   cout << i << "\n";
	   
	   break;
	}
	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int y[3][3];
	for(int i=0; 3>i; i++)
	   for (int j=0; 3>j; j++)
	          cin >> y[j][i];
	         
	         for(int i=0; 3>i; i++)
         	menor(y[0][i], y[1][i], y[2][i]);
	
}