// URL: https://dmoj.uclv.edu.cu/problem/crne
#include <iostream>

using namespace std;


int main() {
    unsigned long long cuts;
    cin >> cuts; // number of cuts

    
    if (!(cuts&1)) cout << (cuts-cuts/2+1)*(cuts-cuts/2+1); // if cuts is even
    else cout << (cuts-cuts/2+1)*(cuts-cuts/2); // if cuts is odd
}

