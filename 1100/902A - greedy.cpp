// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k ; cin >> n >> k;
	vector<int> a(k+1);
	for (int i=0;i<n;i++) {
		int l ,r ; cin >> l >> r;
		for (int j=l;j<=r;j++) {
			if (a[j] == 0 && j != 0 && j == l) {
				a[j] = 0;
				continue;
			}
			a[j] = i+1;
		}
	}
	bool ans = 1;
	for (auto v:a) {
		if (v == 0) ans = 0;
	}
	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;
		
}

