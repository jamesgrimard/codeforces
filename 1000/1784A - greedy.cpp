// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(begin(a),end(a));
		long long p = 0 , cnt = 0;
		for (int i=0;i<n;i++) {
			if (a[i] > p + 1) {
				cnt += (a[i] - (p + 1));
				a[i] = p + 1;
			}
			p = a[i];
		}
		cout << cnt << '\n';
	}


	return 0;
}



