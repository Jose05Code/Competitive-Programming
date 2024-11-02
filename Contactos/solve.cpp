#include <iostream>
#include <vector>
using namespace std;

const int alphabet = 26;			// numero de caracteres del alfabeto ingles

struct Vertex
{
	int next[alphabet];
	int p = -1;					// padre
	char chr;					// a donde apunta
	int cont = 0;

	Vertex(int _p = -1, char _chr = '$') {
		p = _p;
		chr = _chr;
		fill(begin(next), end(next) , -1);
	}

};

vector<Vertex>trie(1);

void add_string(string word) {
	int v = 0;
	for (char x : word) {
		int c = x - 'a';
		if (trie[v].next[c] == -1) {
			trie[v].next[c] = trie.size();
			trie.emplace_back(v, x);
		 }
		v = trie[v].next[c];
		trie[v].cont++;
	}
}

int find_parcial(string word) {
	int v = 0;
	for (char x : word) {
		int c = x - 'a';
		if (trie[v].next[c] == -1)
			return 0;
		v = trie[v].next[c];
	}
	return trie[v].cont;
}

int main()
{
	int N;
	cin >> N;
	while (N--) {
		string command, word;
		cin >> command >> word;
		if (command == "add")
			add_string(word);
		else
			cout << find_parcial(word) << '\n';
	}

}