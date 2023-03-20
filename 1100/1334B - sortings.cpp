// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--){
		int n , k; cin >> n >> k;
		vector<int>a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(rbegin(a),rend(a));
		long long sum = 0;
		int ans = n;
		for (int i=0;i<n;i++) {
			sum += a[i];
			if (sum/k < i + 1) {
				ans = i;
				break;
			}
		}
		cout << ans << '\n';
	}

	return 0;
}

