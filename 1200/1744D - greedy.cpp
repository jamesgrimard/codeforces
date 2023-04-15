// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int cnt = 0;
		vector<int> a;
		for (int i=0;i<n;i++) {
			int x ; cin >> x;
			while (x % 2 == 0) {
				x /= 2;
				cnt++;
			} 
			int p = i+1;
			int tally = 0;
			while (p % 2 == 0) {
				p /= 2;
				tally++;
			}
			if (tally > 0) a.push_back(tally);
		}
		int k = n - cnt;
		if (k <= 0) {
			cout << 0 << '\n';
			continue;
		}
		sort(rbegin(a),rend(a));
		int ans = -1;
		for (int i=0;i<a.size();i++) {
			if (k <= 0) {
				ans = i;
				break;
			}
			k -= a[i];
			if (i == a.size()-1) {
				if (k == 0) {
					ans = i + 1;
				}
			}
		}		
		cout << ans << '\n';
	}
	
	return 0;
}