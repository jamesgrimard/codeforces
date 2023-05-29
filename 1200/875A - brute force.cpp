// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
int n,ans[100],cnt;
int work(int x){
	int tmp = 0;
	while(x){
		tmp += x % 10;
		x /= 10;
	}
	return tmp;
}
int main(){
	cin >> n;
	for(int i = max(0,n - 90);i <= n;++i){
		if(i + work(i) == n) ans[++cnt] = i;
	}
	cout << cnt << endl;
	for(int i = 1;i <= cnt;++i) cout << ans[i] << ' ';
	return 0;
}

		