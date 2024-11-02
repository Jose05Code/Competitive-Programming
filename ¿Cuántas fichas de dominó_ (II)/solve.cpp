#include <iostream>
using namespace std;
int main()
{
	long int x; cin >> x;
	long int y[x];
	for(int i=0; x>i; i++){
	cin >> y[i];
	}
	for(int i=0; x>i; i++){
	cout << (((y[i]+1)*(y[i]+2))/2) << "\n";

	}
}