// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , a , b; cin >> n >> a >> b;
		int k = (n-2) / 2;
		bool ans = 1;
		if (n % 2 == 1) {
			if (a > k + 1 || b > k + 1) ans = 0;
			if (a == k+1 && b == k+1) ans = 0;
		} else {
			if (a > k || b > k) ans = 0;
		}
		if (ans == 0 || abs(a-b) > 1) {
			cout << -1 << '\n';
		} else {
			if (a == 0 && b == 0) {
				for (int i=1;i<=n;i++) cout << i << " ";
				cout << '\n';
				continue;
			}
			if (a == 0 && b == 1 && n == 3) {
				cout << 3 << " " << 1 << " " << 2 << '\n';
				continue;
			}
			vector<int> r(n);
			r[0] = n/2;
			int mn = 1, mx = n;
			if (b == a) {
				for (int i=0;i<b;i++) {
					r[i*2+1] = mn;
					mn++;
					if (mn == n/2) mn++;
				}
				for (int i=0;i<a;i++) {
					r[i*2+2] = mx;
					mx--;
					if (mx == n/2) mx--;
				}
				for (int i=a+b+1;i<n;i++) {
					r[i] = mx;
					mx--;
					if (mx == n/2) mx--;
				}				
			} else if (b > a) {
				for (int i=0;i<b;i++) {
					r[i*2+1] = mn;
					mn++;
					if (mn == n/2) mn++;
				}
				for (int i=0;i<a;i++) {
					r[i*2+2] = mx;
					mx--;
					if (mx == n/2) mx--;
				}
				for (int i=a+b+1;i<n;i++) {
					r[i] = mn;
					mn++;
					if (mn == n/2) mn++;
				}
			} else {
				for (int i=0;i<b;i++) {
					r[i*2+2] = mn;
					mn++;
					if (mn == n/2) mn++;
				}
				for (int i=0;i<a;i++) {
					r[i*2+1] = mx;
					mx--;
					if (mx == n/2) mx--;
				}
				for (int i=a+b+1;i<n;i++) {
					r[i] = mx;
					mx--;
					if (mx == n/2) mx--;
				}
			}
			for (auto v:r) cout << v << " ";
			cout << '\n';
		}
	}


	return 0;
}