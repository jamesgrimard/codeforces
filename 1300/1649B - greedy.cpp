// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(a.begin(),a.end());
		long long sum = 0,cnt=1;
		if (a[n-1] == 0) {
			cout << 0 << '\n';
		} else {
			for (int i=0;i<n-1;i++) sum += a[i];
			sum++;
			if (sum >= a[n-1]) {
				cout << cnt << '\n';
			} else {
				cout << cnt + (a[n-1]-sum) << '\n';
			}
		}
	}

	
	return 0;	
}