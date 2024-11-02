#include <iostream>
using namespace std;

string bal(string x){
	int cont=0;
	for(int i=0 ; x.size()>i; i++){
	if(cont==-1)
	return "No Balanceada\n";
	if(x[i]=='>')
	cont++;
	else
	cont--;
	}
	if(cont==0)
	return "Balanceada\n";
	else
	return "No Balanceada\n";
	
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int x;
	cin >> x;
	string z[x];
	int y[x];
	for(int i=0; x>i; i++){
	cin >> y[i];
	cin >> z[i];
	}
	
	for(int i=0; x>i; i++)
	cout << bal(z[i]);


	return 0;
}