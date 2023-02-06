// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n ;cin >> n;
		vector<int> a(n),b(n);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) cin >> b[i];
		int p = 0;
		bool flag = 0 , f = 0 , ans = 1;
		for (int i=0;i<n;i++) {
			if (a[i] != b[i]) {
				flag = 1;
				if (p == 0 && b[i] - a[i] > 0) {
					p = b[i] - a[i];
				} else {
					if (b[i] - a[i] != p) ans = 0;
				}
			}
			if (flag == 1 && a[i] == b[i]) {flag == 0; f =1;}
			if (a[i] != b[i] && f == 1) ans = 0;
		}
		(ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}
