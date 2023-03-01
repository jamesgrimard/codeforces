// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		map<int,bool> m;
		vector<int> a;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (m[x] == 0) a.push_back(x);
			m[x] = 1;
		}
		
		bool ans = 0;
		for (int i=0;i<size(a);i++) {
			if (m[a[i]+k] == 1 || m[a[i]-k] == 1) {
				ans = 1;
				break;
			}
		}

		(ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

