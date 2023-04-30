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
		map<int,int> m;
		int mn = -1;
		for (int i=0;i<n;i++) {
			if (m[a[i]] == 0) {
				m[a[i]] = i + 1;
				continue;
			}
			if (mn == -1 || i + 1 - m[a[i]] + 1 < mn) mn = i + 1 - m[a[i]] + 1;
			m[a[i]] = i + 1;
		}
		cout << mn << '\n';
	}


	return 0;
}