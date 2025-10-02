#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
	int N; // numero de camiones
	while(1)
	{
		cin >> N;
		if (N == 0)
			break;
		queue <int> queue; // cola de camiones
		stack <int> stack; // calle para el cambio
		int cont = 1;
		for (int i = 1; i <= N; i++) {
			int aux;
			cin >> aux;
			queue.push(aux);
		}

		while (!queue.empty()) {
			if (queue.front() == cont) {
				queue.pop();
				cont++;
			}
			else if (!stack.empty() && stack.top() == cont) {
				cont++;
				stack.pop();
			}
			else {
				stack.push(queue.front());
				queue.pop();
			}
		}

		while (!stack.empty()) {
			if (stack.top() == cont) {
				cont++;
				stack.pop();
			}
			else break;
		}

		if (cont == N+1)
			cout << "yes\n";
		else
			cout << "no\n";

	}
}