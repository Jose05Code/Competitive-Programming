#include <iostream>
using namespace std;
int main()
{
	 long int c=0, v=0, x;cin >> x;
     long int y[x], z[x];
	long int k;
	for(int i=0; x>i; i++){
		cin >> y[i];
	}
	for(int i=0; x>i; i++){
		z[i]=0;
		k=1;
		v=y[i];
	while(y[i]>0){
	 c=y[i]%2;
	 y[i]= y[i]/2;
	 z[i]= z[i]+ c*k;
	 k= k*10;
	}
	cout <<v<<"(2) = "<< z[i] << "\n";
	}	
}