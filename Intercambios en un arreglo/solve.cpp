#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> array(n);
	vector <int> array_sort(n);
	for (int i = 0; i < n; i++) {
		cin >> array[i];
		array_sort[i] = array[i];
	}
	sort(array_sort.begin(), array_sort.end());
	int cont = 0;
	int res = 0;

	for (int i = 0; i < n; i++) {
		if (array[i] != array_sort[i]) {
			cont++;
			if (cont > 2) {
				res--;
				break;
			}
		}
	}
	if (cont == 2) {
		res++;
	}
	cout << res;

}