// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x != i) {
				a.push_back(x);
			}
		}
		int p = a[0];
		for (int i=1;i<size(a);i++) p &= a[i];
		cout << p << '\n';
	}

	return 0;
}

