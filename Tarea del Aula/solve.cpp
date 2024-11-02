#include <iostream>
using namespace std;

int main() {
	string a,b;
	char c;
	cin >> a >> c >> b;

	if(c=='*') {
		a.insert(a.end(), b.size()-1, '0' );
		cout << a;
	}

	if(a < b)
		swap(a, b);

	if (c=='+' && a!=b) {
		a.insert(a.end()-b.size(),1,'1');
		a.resize(a.size()-1);
		cout << a;
	}

	if(a==b && c=='+') {
		a.insert(a.begin(), 1, '2');
		a.erase(a.begin()+1);
		cout << a;
	}

}