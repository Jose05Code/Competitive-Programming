#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int x; cin >> x;
	int x_1 = x % 10;
	x /= 10;
	int x_2 = x % 10;
	x /= 10;
	int x_3 = x % 10;

	if (x_3 >= max(x_1, x_2))
		cout << x_3 * 111;
	else
		cout << (x_3 + 1) * 111;

}