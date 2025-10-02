#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout.setf(ios::fixed);cout.precision(0);
	unsigned long long a,b,c,div=0;
	cin >> a>> b >> c;
	int size=to_string(c).size();
	unsigned long long sizeconst = size;

	for(int i=0; size>i; i++){
		div+=to_string(c)[i]-'0';
	}
	

		for( int i=1; b>i; i++){
			sizeconst += (sizeconst-1)*size;
			sizeconst%=34047161064;
		}
		cout << sizeconst<<"\n";
		
		if(a==2){
		if(div%3==0)
		cout <<"Si";
		else
		cout <<"No";
}}