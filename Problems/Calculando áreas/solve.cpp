#include <bits/stdc++.h>
using namespace std;
int main(){
	cout.precision(2);
	int x; cin >> x;
	float arr[x];
	for(int i=0; i<x; i++){
	cin >> arr[i];
}

	for(int i=0; i<x; i++)
	cout << fixed << ((arr[i])*(arr[i]))-((arr[i]/2)*(arr[i]/2))*acos(-1) << "\n";
}