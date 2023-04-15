// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		map<int,int> m;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			m[x]++;
		}


		int cnt = 0 , b = 0 , p = 0;
		for (auto [k,v] : m) {
			
			if (k == p + 1 && p != 0) cnt += max(0,b-v);
			if (k != p + 1 && p != 0) cnt += b;
			b = v;
			p = k;
		}
		
		cout << cnt + b << '\n';
	}
	
	return 0;
}