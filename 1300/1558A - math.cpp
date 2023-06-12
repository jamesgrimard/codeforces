// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int a,b; cin >> a >> b;
		if (a<b) swap(a,b);
		int mn = max(0,a-(a+b)/2) , mx = min((double)a,ceil((double)(a+b)/2.0));
		vector<int> r(a+b+1);
		for (int i=mn;i<=mx;i++) {
			int oop = (a-i)+(ceil((double)(a+b)/2.0)-i);
			r[oop] = 1 , r[(a+b)-oop] = 1;
		} 
		int cnt = 0;
		for (int i=0;i<=a+b;i++) if (r[i] == 1) cnt++;
		cout << cnt << '\n';
		for (int i=0;i<=a+b;i++) if (r[i] == 1) cout << i << " ";
		cout << '\n';
	}

	return 0;	
}