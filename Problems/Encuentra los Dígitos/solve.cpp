#include <iostream>
using namespace std;
int main(){
	int x, cont=0; cin >> x;
	int y[x];
	string z;
	for(int i=0; x>i; i++)
	cin >> y[i];
	for(int i=0; x>i; i++){
	z = std::to_string(y[i]);
	for(int j=0; j<z.size(); j++)
	if(z[j]!='0')
	if(y[i]%(z[j]-'0')==0)
	cont++;
	cout << cont << "\n";
	cont=0;
}
}