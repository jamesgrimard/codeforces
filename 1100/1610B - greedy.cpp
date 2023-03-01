// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> s(n);
		for (int i=0;i<n;i++) cin >> s[i];
		int a = 0 , b = 0;
		bool A = 1 , B = 1;	
		int l = 0 , r = n-1 , L = 0 , R = n-1;
		while (r-l >= 1) {
			if (s[l] == s[r]) {
				l++; r--;
				continue;
			}
			if (a == 0) {
				a = s[l]; b = s[r];
			}
			if (s[l] == a) {
				l++;
			} else if (s[r] == a) {
				r--;
			} else {
				A = 0;
				break;
			}
		}
		while (R-L >= 1) {
			if (s[L] == s[R]) {
				L++; R--;
				continue;
			}
			if (a == 0) {
				a = s[L]; b = s[R];
			}
			if (s[L] == b) {
				L++;
			} else if (s[R] == b) {
				R--;
			} else {
				B = 0;
				break;
			}
		}

		(A == 1 || B == 1) ? cout << "YES\n" : cout << "NO\n";

	}

	return 0;
}

