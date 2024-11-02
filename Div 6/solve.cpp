#include <iostream>
using namespace std;
int main(){
int x, cont=0; cin >> x;
string y[x];
for(int i=0; x>i; i++)
cin >> y[i]	;

	for(int i=0; x>i; i++){
			for(int j=0; j < y[i].size(); j++){
			cont += (y[i][j]-'0');      
}
if((y[i][y[i].size()-1]-'0')%2==0 && cont%3==0)
	cout << "YES \n";
	else
	cout << "NO \n";
	cont= 0;
}
}