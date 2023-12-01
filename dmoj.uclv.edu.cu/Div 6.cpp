#include <iostream>
using namespace std;

bool div3(string x){
    int sum=0;
    for(int i=0;i<x.length();i++){
        sum+=x[i]-'0';
    }
    if(sum%3==0)
    return 1;
    else
    return 0;
}

bool div2(string x){
    if((x[x.length()-1]-'0')%2==0)
    return 1;
    else
    return 0;
}

void div(string x){
    if(div2(x) && div3(x))
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
}


int main() {
    int rep;
    cin >> rep;
    while(rep--){
        string input;
        cin >> input;
        div(input);
    }

    return 0;
}
