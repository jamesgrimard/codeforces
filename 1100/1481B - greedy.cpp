// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k ; cin >> n >> k;
		vector<int> a(n),b(10001);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=1;i<=10000;i++) {
			for (int j=0;j<n-1;j++) {
				if (a[j] >= a[j+1] && j < n-2) continue;
				if (a[j] >= a[j+1] && j == n-2) b[i] = -1;
				if (a[j] < a[j+1]) {
					b[i] = j+1;
					a[j]++;
					break;
				}
			}
		}
		(k <= 10000 && n != 1) ? cout << b[k] : cout << -1;
		cout << '\n';
		
	}

	return 0;
}

