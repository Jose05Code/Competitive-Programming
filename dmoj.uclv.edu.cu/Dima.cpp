#include <iostream>
using namespace std;

int main() {
    int n,a,currentnumber=0;
    unsigned long long res=0; 
    cin >> n;
    for(int i=0;i<n;i++){
    cin >> a;
    res+=abs(a-currentnumber);
    currentnumber=a;
    }
    cout << res;
    return 0;
    }
