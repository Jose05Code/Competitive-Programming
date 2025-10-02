#include <bits/stdc++.h>
using namespace std;
bool k;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int x, y, aux=0; cin >> x;
	queue <int> p;
	for(int i=0 ; x>i; i++){
	cin >> y;
	p.push(y);
}
	for(int i=0; x>i; i++){
		
		if(p.front() + aux >=i+1 && aux >= 0){
		aux += p.front()-(i+1);
		p.pop();
	} 
	else{
		k=1;
		break;
	}	
	}
		cout << ((k==0 && aux==0) ? "Si" : "No");
	}