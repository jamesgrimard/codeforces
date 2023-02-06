// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string p , h; cin >> p >> h;
		if (size(p) > size(h)) {
			cout << "NO\n"; continue;
		}
		sort(begin(p),end(p));
		bool ans = 0;
		for (int i=0;i<=size(h)-size(p);i++) {
			string s = h.substr(i,size(p));
			sort(begin(s),end(s));
			//cout << p << " " << s << '\n';
			if (s == p) {
				ans = 1; break;
			}
		}
		(ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}
