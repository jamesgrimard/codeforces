// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(3);
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x % 3 == 0) a[0]++;
			if (x % 3 == 1) a[1]++;
			if (x % 3 == 2) a[2]++;
		}
		cout << max(a[0]-a[2],max(a[2]-a[1],a[1]-a[0])) << '\n';
	}


	return 0;
}
