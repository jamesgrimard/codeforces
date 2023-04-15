// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		string s; cin >> s;
		int l = 0 , r = n-1;
		while (s[l] == s[r]) {
			l++;
			r--;
		}
		int cnt1 = 0 , cnt2 = 0;
		if (s[l] == s[r]) {
			cout << 0 << '\n';
		} else {
			int L = l , R = r;
			bool f1 = 1 , f2 = 1;
			while(L < R) {
				if (s[L] != s[R]) {
					if (s[R] == s[r]) {
						cnt1++;
						R--;
					} else if (s[L] == s[r]) {
						cnt1++;
						L++;
					} else {
						f1 = 0;
						break;
					}
				} else {
					L++ , R--;
				}
			}
			L = l ; R = r;
			while(L < R) {
				if (s[L] != s[R]) {
					if (s[R] == s[l]) {
						cnt2++;
						R--;
					} else if (s[L] == s[l]) {
						cnt2++;
						L++;
					} else {
						f2 = 0;
						break;
					}
				} else {
					L++ ; R--;
				}
			}
			if (f1 == 0 && f2 == 0) {
				cout << -1 << '\n';
			} else if (f1 == 1 && f2 == 1) {
				cout << min(cnt1,cnt2) << '\n';
			} else if (f1 == 1) {
				cout << cnt1 << '\n';
			} else {
				cout << cnt2 << '\n';
			}
		}
	}

	return 0;
}