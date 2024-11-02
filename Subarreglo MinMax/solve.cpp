#include <bits/stdc++.h>
using namespace std;
vector <int> mayores;
vector <int> menores;

int maxim(vector <int> x){
    sort(x.begin(), x.end());
    return x.back();
}

void max(vector <int> x){
    int max;
    max = maxim(x);
    for(int i=0; x.size()>i; i++)
    if(x[i]==max)
    mayores.push_back(i);
}

int minim(vector <int> x){
    sort(x.begin(), x.end());
    return *x.begin();
}

void min(vector <int> x){
    int min;
    min = minim(x);
    for(int i=0; x.size()>i; i++)
    if(x[i]==min)
    menores.push_back(i);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x; cin >> x;
int aux=x+3;
vector <int> asd(x);
for(int i=0; x>i; i++)
cin >> asd[i];

    max(asd);
    min(asd);

    for(int i=0; mayores.size()>i; i++)
      for(int j=0; menores.size()>j; j++)
            if(aux>abs(mayores[i]-menores[j]))
                aux=abs(mayores[i]-menores[j]);

    if(maxim(asd)==minim(asd))
    cout << 1;
    else
    cout << aux+1;

}