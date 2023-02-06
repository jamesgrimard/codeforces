// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<string> a(5);
		vector<int> A(5);
		for (int i=0;i<n;i++) {
			for (int j=0;j<5;j++) {
				string x; cin >> x;
				a[j] += x;
				if (x == "1") A[j]++;
			}
		}
		bool ans = 0;
		for (int i=0;i<5;i++) {
			if (A[i] < n/2) continue;
			for (int j=i+1;j<5;j++) {
				if (A[j] < n/2) continue;
				bool ans_ = 1;
				for (int k=0;k<n;k++) {
					if (a[i][k] == '0' && a[j][k] == '0') {
						ans_ = 0; break;
					}
				}
				if (ans_ == 1) {
					ans = 1; goto out;
				}
			}
		}
		out: (ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}
