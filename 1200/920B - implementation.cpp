// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >>n;
		vector<pair<int,int>> a(n);
		int q = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i].first >> a[i].second;
			if (i > 0) q = max(0,q-(a[i].first-a[i-1].first));
			if (a[i].first+q <= a[i].second) {
				cout << a[i].first + q << " ";
				q++;
			} else {
				cout << 0 << " ";
			}
		}
		cout << '\n';
	}

	return 0;	
}

		