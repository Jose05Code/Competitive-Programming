#include <iostream>
#include <vector>
using namespace std;

void mid(const vector<int>& list_input, vector<string>& response, int min, int max, int level) {
    if (min > max) {
        return;
    }
    int mid_index = (min + max) / 2;
    response[level] += to_string(list_input[mid_index]) + " ";
    mid(list_input, response, min, mid_index - 1, level + 1);
    mid(list_input, response, mid_index + 1, max, level + 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int k;
    cin >> k;
    int nodos = (1 << k) - 1;

    vector<int> list_input(nodos);
    for (int i = 0; i < nodos; ++i) {
        cin >> list_input[i];
    }

    vector<string> response(k);
    mid(list_input, response, 0, nodos - 1, 0);

    for (const string& level : response) {
        cout << level << endl;
    }

    return 0;
}