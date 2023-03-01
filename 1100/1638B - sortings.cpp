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
		bool o = 1 , e = 1;
		int po = -1 , pe = -1;
		for (int i=0;i<n;i++) {
			if (po == -1 && a[i] % 2 == 1) {po = a[i];continue;}
			if (pe == -1 && a[i] % 2 == 0) {pe = a[i];continue;}
			if (a[i] % 2 == 0) {
				if (a[i] < pe) e = 0;
				pe = a[i];
			} else {
				if (a[i] < po) o = 0;
				po = a[i];
			}
		}
		(o == 0 || e == 0) ? cout << "No\n" : cout << "Yes\n";
	}

	return 0;
}

