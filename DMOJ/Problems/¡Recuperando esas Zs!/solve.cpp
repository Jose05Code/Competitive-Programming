#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string Sentence;
		getline(cin, Sentence);
		int count = 0;
		for (int i = 0; i < Sentence.length(); i++) {
			if (tolower(Sentence[i]) == 'z')
				count++;
			if (count == 3)
				break;
		}
		if (count == 3)
			cout << "Time to take a nap.\n";
		else
			cout << "Perry saves the day!\n";
	}
}