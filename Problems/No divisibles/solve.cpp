#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int n; cin >> n;
	cout<<n-((n/2)+(n/3)+(n/5)-(n/10)-(n/6)-(n/15)+(n/30));
}