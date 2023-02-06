// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int K = s.find("11") , KK = s.rfind("00");
		if (K < KK && K != -1) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
	return 0;
}
