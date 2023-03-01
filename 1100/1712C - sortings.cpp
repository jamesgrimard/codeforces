// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
const int n1=1e9+7;

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		map<int,int> m1,m;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			m1[a[i]] = a[i];
		}
		int cnt = 0;
		for (int i=0;i<n-1;i++) {
			if (m1[a[i]] != 0) m[a[i]] = 1;
			if (m1[a[i]] > m1[a[i+1]]) {
				cnt+=size(m);
				for (auto [k,v] : m) {
					m1[k] = 0;
				}
				m.clear();
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}

