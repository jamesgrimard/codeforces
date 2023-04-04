// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 	
	int n , m , k; cin >> n >> m >> k;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(rbegin(a),rend(a));
	if (m <= k) {
		cout << 0;
		return 0;
	}
	m -= (k-1);
	int cnt = 0;
	for (int i=0;i<n;i++) {
		if (m == 0) break;
		cnt++;
		if (a[i] >= m) {
			m = 0;
			break;
		}
		m -= (a[i]-1);
	}
	m != 0 ? cout << -1 : cout << cnt;

	return 0;
}
