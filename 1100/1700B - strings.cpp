// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin>> n;
		string s; cin >> s;
		if (s[0] == '9') {
			string A = "";
			bool f = 0;
			for (int i=size(s)-1;i>=0;i--) {
				int k = s[i]-'0';
				if (f == 1) k++;
				if (k == 0 || k == 1) {
					(k == 1) ? A = "0" + A : A = "1" + A;
					f = 0;
					continue;
				}
				f = 1;
				A = to_string(11-k) + A;
			}
			cout << A << '\n';
		} else {
			string S = "";
			for (int i=0;i<size(s);i++) S += to_string('9'-s[i]);
			cout << S << '\n';
		}
	}

	return 0;
}

