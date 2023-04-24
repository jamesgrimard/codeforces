// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {

		int n; cin >> n;
		vector<int> a(n);
		map<int,int> m;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) {
			if (i == 0 || a[i] != a[i-1]) m[a[i]]++;
		}
		m[a[0]]-- , m[a[n-1]]--;
		int mn = n;
		for (auto [k,v] : m) if (v < mn) mn = v;
		cout << mn + 1 << '\n';
	}

	return 0;
}