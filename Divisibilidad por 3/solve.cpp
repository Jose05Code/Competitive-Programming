#include <bits/stdc++.h>
using namespace std;
bool k;
int main(){
int mult;
int aux;
vector <int> asd(3);
cin >> asd[0] >> asd[1] >> asd[2];
sort(asd.begin(), asd.end());

if(asd[0]%3==0)
cout << asd[0];
else if(asd[1]%3==0)
cout << asd[1];
else if(asd[2]%3==0)
cout << asd[2];
else{
for(int i=0; 3>i; i++){
    mult=asd[i]*10;
    for(int y=0; 3>y; y++){
    aux=0;
    aux=mult + asd[y];
    if(aux%3==0){
    cout << aux;
    k=true;
    break;
    }
    }
    if(k)
    break;
    }
    if(!k)
    cout << asd[0]*100+asd[0]*10+asd[0];
}

}