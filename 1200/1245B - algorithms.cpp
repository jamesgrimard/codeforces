// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int>a(3),b(3);
		for (int i=0;i<3;i++) cin >> a[i];
		string s; cin >> s;
		string S = s;
		int cnt = 0;
		for (int i=0;i<n;i++) {
			if (s[i] == 'R' && a[1] > 0) {
				a[1]--;
				s[i] = 'x';
				cnt++;
				S[i] = 'P';
			}
			if (s[i] == 'P' && a[2] > 0) {
				a[2]--;
				s[i] = 'x';
				cnt++;
				S[i] = 'S';
			}
			if (s[i] == 'S' && a[0] > 0) {
				a[0]--;
				s[i] = 'x';
				cnt++;
				S[i] = 'R';
			}
		}
		for (int i=0;i<n;i++) {
			if (s[i] != 'x') {
				if (a[0] > 0) {
					S[i] = 'R';
					a[0]--;
				} else if (a[1] > 0) {
					S[i] = 'P';
					a[1]--;
				} else {
					S[i] = 'S';
					a[2]--;
				}
			}
		}

		if (cnt >= ceil((float)n/2.0)) {
			cout << "YES\n";
			cout << S << '\n';
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}