#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    num*=num;
    num/=100;
    cout << num%10000 << endl;
}