// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	vector<int> a(k);
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		a[x%k]++;
	}
	int cnt = a[0]/2;
	for (int i=1;i<=k/2;i++) {
		if (i == k/2 && k % 2 == 0) {
			cnt += a[i]/2;
			continue;
		}
		cnt += min(a[i],a[k-i]);
	}
	cout << cnt * 2 << '\n';

	return 0;
}