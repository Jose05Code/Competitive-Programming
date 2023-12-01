#include <iostream>
using namespace std;
int main(){
    int airports, house, end;
    cin >> airports >> house >> end;

    string input;
    cin >> input;

    if(input[house-1] == input[end-1]) 
    cout << 0 << endl;
    else 
    cout << 1 << endl;
}