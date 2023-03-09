// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int cnt = 0;
		for (int i=0;i<size(s);i++) {
			cnt++;
			if (s[i] == 'B' && cnt > 1) cnt -= 2; 
		}
		cout << cnt << '\n';
	}

	return 0;
}

