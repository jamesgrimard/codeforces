#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int a[101] = {};
	for (int i=1;i<=100;i++) a[i] = (i * i - i) / 2;

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		int A , B;
		bool ans = 0;
		for (int i=1;i<=100;i++) {
			if (a[i] > k) break;
			for (int j=0;j<=100;j++) {
				if (a[i] + a[j] > k) break;
				if (a[i] + a[j] == k && i + j == n) {
					ans = 1;
					A = i , B = j;
				}
			}
			if (ans) break;
		}
		if (ans) {
			cout << "YES\n";
			for (int i=0;i<A;i++) cout << "-1 ";
			for (int i=0;i<B;i++) cout << "1 ";
		} else {
			cout << "NO";
		}
		cout << '\n';
	}

	return 0;
}