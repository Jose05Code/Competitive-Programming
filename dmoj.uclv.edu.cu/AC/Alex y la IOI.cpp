// URL: https://dmoj.uclv.edu.cu/problem/alexandioi
#include <iostream>
using namespace std;

int main(){
    // Read input
    int airports, house, end;
    cin >> airports >> house >> end;

    // Read the string
    string input;
    cin >> input;

    // Check if the characters at positions house-1 and end-1 are the same
    if(input[house-1] == input[end-1]) 
        cout << 0 << endl; //
    else 
        cout << 1 << endl;
}