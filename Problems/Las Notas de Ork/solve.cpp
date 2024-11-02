#include <iostream>
#include <map>
#define map(a, b)  nota.insert(make_pair('a', b))
using namespace std;
int main()
{
	char x;  cin >> x;
	map <char, int> nota;
    nota ['A']=5; nota['B']=nota['C']=4; nota['D']=3; nota['E']=2;
	cout << nota[x];
	
	
}