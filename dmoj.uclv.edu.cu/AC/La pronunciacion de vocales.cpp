#include <iostream>
using namespace std;
int main(){
    string n; 
    cin >> n; // lee el string
    
    int orgullosa_maxima = 0;
    int orgullosa = 0;
    for(int i=0; n.size()>i; i++){
        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u'){
            orgullosa++;
            orgullosa_maxima = max(orgullosa_maxima, orgullosa);
        }
        else
            orgullosa = 0;
        
    }

    cout << orgullosa_maxima << endl;

}