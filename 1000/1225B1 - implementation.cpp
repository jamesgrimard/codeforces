// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n , k , d; cin >> n >> k >> d;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		int mn = n;
		for (int i=0;i<=n-d;i++) {
			map<int,bool>m;
			for (int j=i;j<i+d;j++) m[a[j]] = 1;
			mn = min((int)size(m),mn);
			if (mn == 1) break;
		}
		cout << mn << '\n';
	}

	return 0;
}


