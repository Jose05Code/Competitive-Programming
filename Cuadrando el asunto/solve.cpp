#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>

auto main()->int{
    std::cout.precision(1);
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
    auto num = int();
    auto tot = long();
    std::cin>>num;
    std::set<int>val1;
    std::vector<int>val(num);

    for(auto i {0};num>i;i++){
    std::cin>>val[i];
    val1.insert(val[i]);
    }
    
    std::map<int,long>cnt;

    for(auto i {val1.begin()}; i!=val1.end(); i++)
    cnt.insert(std::make_pair(*i, std::count(val.begin(), val.end(), *i)));

    for(auto i {val1.begin()}; i!=val1.end(); i++)
        for(auto j {i}; j!=val1.end(); j++)
     tot+=cnt[*i]*cnt[*j]*((*i-*j)*(*i-*j));
    

    std::cout<<tot;
    
}