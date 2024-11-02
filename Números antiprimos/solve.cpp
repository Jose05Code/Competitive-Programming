#include <iostream>
using namespace std;
int n,cnt[20] ,prime[20] = {0,2,3,5,7,11,13,17,19,23,29},ans,ant;
void x(int id,long now){
	if(id == 11){
		int tp = 1;
		for(int i= 1; i <= 10; i++)
		 tp = tp*(cnt[i]+1);
		if(tp > ant) ant = tp, ans = now;
		else if(tp == ant && now < ans) ans = now;
		return;
	}
	cnt[id] = 0; x (id+1,now);
	for(int i= 1; i <= 30; i++){
		now = now*prime[id];
		if(now > n) break;
		cnt[id] = i; x(id+1,now);
	}
}
 
int main()
{
	cin >> n;
	x (1,1);
	cout << ans;
	return 0;
}