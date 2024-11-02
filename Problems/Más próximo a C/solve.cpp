#include <iostream>
#include <set>

int main()
{
   	std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); 
    int a,b,c;std::cin>>a>>b>>c;
    std::set<int> vec {a+a,a+b,a*a,b*b,b+b,a*b};
    std::set<int> ::iterator low = vec.end();
    if(*vec.find(c)==c){
        std::cout << c;
        goto xds;
    }
    vec.insert(c);

    if(*vec.begin()==c){
        std::cout << *++vec.begin();
        goto xds;
    }

    if(*--low==c){
        std::cout << *--low;
        goto xds;
    }

    if(c-*--vec.find(c)>*++vec.find(c)-c)
    std::cout << *++vec.find(c);
    else
    std::cout << *--vec.find(c);


    xds:
    return 0;
}