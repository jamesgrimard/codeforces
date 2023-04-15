// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt ; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		int K = k;
		vector<pair<int,int>> a(n);
		for (int i=0;i<n;i++) cin >> a[i].first;
		for (int i=0;i<n;i++) cin >> a[i].second;
		sort(begin(a),end(a));
		for (int i=n-2;i>=0;i--) {
			if (a[i].second > a[i+1].second) a[i].second = a[i+1].second;
		}
		bool ans = 1;
		for (int i=0;i<n;i++) {
			while (k - a[i].first < 0 && K > 0){
				if (k - a[i].first < 0) {
					K -= a[i].second;
					k += K;
				}
			}
			if (K <= 0) {
				ans = 0;
				break;
			}
		}
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}
	
	return 0;
}