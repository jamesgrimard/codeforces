// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ;cin >> n;
		vector<pair<long long,long long>> a(n);
		for (int i=0;i<n;i++) {
			cin >> a[i].first; a[i].second = i+1;
		}
		sort(rbegin(a),rend(a));
		long long sum = 0;
		for (int i=0;i<n;i++) {
			long long k = i/2+1;
			sum += (k*2 * a[i].first);
			if (i % 2 == 1) k *= -1;
			a[i].first = k;
		}
		sort(begin(a),end(a),[] (auto a, auto b) {
			return a.second < b.second;
		});
		cout << sum << '\n' << 0;
		for (int i=0;i<n;i++) cout << " " << a[i].first;
		cout << '\n';
	}

	return 0;
}
