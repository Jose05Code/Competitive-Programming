#include <bits/stdc++.h>
using namespace std;

    bool palindrome(string x){
        string y = x;
        reverse(y.begin(), y.end());
        if(x==y)
        return true;
        else
        return false;
    }

    bool bipalindrome(string x){
        string y=x;
        int size=x.size();
        for(int i=0; i<size;i++)
        if(!palindrome(x))
        x.erase(x.begin());

        for(int i=0; i<size; i++)
        if(!palindrome(y))
        y.erase(--y.end());

        if(x.size()+y.size()==size)
        return true;
        else 
        return false;
    }



int main(){
    int x; cin >> x;
    string palabra;
    for(int i=0; x>i; i++){
        cin >> palabra;
        if(palindrome(palabra)==1)
        cout << "palindrome\n";
        else if(bipalindrome(palabra)==1)
        cout << "bi-palindrome\n";
        else 
        cout << "non-palindrome\n";
}
    return 0;
}