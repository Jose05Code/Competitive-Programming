#include <iostream>
using namespace std;

int enchufes(){
    int x, aux,sum=0; cin >> x;
    for(int i=0; x>i; i++){
    cin>>aux;
    sum+=aux;
    }

    return sum-x+1;

}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x; cin >> x;
    int y[x];
   for(int i=0; x>i; i++){
    y[i]=enchufes();
   }

    for(int i=0; x>i; i++)
    cout << y[i] << "\n";

}