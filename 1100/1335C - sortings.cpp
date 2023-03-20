// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		unordered_map<int,int> m;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			m[x]++;
		}
		int mode = 0;
		for (auto [_,v] : m) mode = max(v,mode);
		int k = size(m);
		cout << max(min(k-1,mode),min(k,mode-1)) << '\n';
		
	}

	return 0;
}

