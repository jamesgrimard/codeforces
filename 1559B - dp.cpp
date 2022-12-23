// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		string s;
		int n; cin >> n >> s;

		for (int i=1;i<s.size();i++) {
			if (s[i] == '?') {
				if (s[i-1] == 'R') {
					s.replace(i,1,"B");
				} else if (s[i-1] == 'B') {
					s.replace(i,1,"R");
				}
			}
		}

		for (int i=s.size()-2;i>=0;i--) {
			if (s[i] == '?') {
				if (s[i+1] == 'R') {
					s.replace(i,1,"B");
				} else if (s[i+1] == 'B') {
					s.replace(i,1,"R");
				}
			}
		}

		for (int i=0;i<s.size();i++){
			if (s[i] == '?') {
				(i % 2 == 0) ? s.replace(i,1,"R") : s.replace(i,1,"B");
			}
		}

		cout << s << '\n';

	}

	return 0;
}
