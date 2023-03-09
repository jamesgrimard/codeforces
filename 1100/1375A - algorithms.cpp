// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n),b(n);
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (i % 2 == 0) {
				(x < 0) ? a[i] = x : a[i] = x * -1;
				(x < 0) ? b[i] = x * -1 : b[i] = x;
			} else {
				(x < 0) ? a[i] = x * -1 : a[i] = x;
				(x < 0) ? b[i] = x : b[i] = x * -1;
			}
		}
		bool A = 1 , B = 1;
		for (int i=1;i<n;i++) {
			if (i % 2 == 1 && a[i] < a[i-1]) A = 0;
			if (i % 2 == 1 && a[i] > a[i-1]) B = 0;
		}
		if (A == 1) {
			for (auto v : a) cout << v << " ";
		} else {
			for (auto v : b) cout << v << " ";
		}
		cout << '\n';
	}

	
	return 0;
}

