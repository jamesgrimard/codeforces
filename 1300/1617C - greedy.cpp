// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n+1),b;
		for (int i=1;i<=n;i++) {
			int x; cin >> x;
			if (x <= n && a[x] == 0) {
				a[x] = 1;
			} else {
				b.push_back(x);
			}
		}
		if (b.size() > 1) sort(begin(b),end(b));
		bool ans = 1;
		int p = 0;
		for (int i=1;i<=n;i++) {
			if (a[i] == 1) continue;
			if (b[p] <= i*2) {
				ans = 0;
				break;
			}
			p++;
		}
		ans == 1 ? cout << b.size() << '\n' : cout << -1 << '\n';
	}


	return 0;	
}