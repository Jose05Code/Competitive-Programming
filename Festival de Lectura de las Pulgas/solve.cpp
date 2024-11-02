#include <bits/stdc++.h>
using namespace std;
int main()
{
	string x; cin >> x;
	int br=count(x.begin(), x.end(), 'A') +	count(x.begin(), x.end(), 'E') +count(x.begin(), x.end(), 'I') +count(x.begin(), x.end(), 'O') +count(x.begin(), x.end(), 'U') ;
	cout << br << " "<< x.size()-br;
}