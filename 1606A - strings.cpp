// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		string s; cin >> s;

		int ab = 0 , ba = 0;

		for (int i=0;i<s.size()-1;i++){
			if (s[i] == 'a' && s[i+1] == 'b') ab++;
			if (s[i] == 'b' && s[i+1] == 'a') ba++;
		}

		if (ab > ba) {

			if (s[0] == 'a' && (s[1] == 'a' || s[1] == 'b')) {
				s[0] = 'b';
			} else if (s[s.size()-1] == 'b' && (s[s.size()-2] == 'a' || s[s.size()-2] == 'b')) {
				s[s.size()-1] = 'a';
			}

		} else if (ba > ab) {

			if (s[0] == 'b' && (s[1] == 'b' || s[1] == 'a')) {
				s[0] = 'a';
			} else if (s[s.size()-1] == 'a' && (s[s.size()-2] == 'b' || s[s.size()-2] == 'a')) {
				s[s.size()-1] = 'b';
			}

		}

		cout << s << '\n';

	}

	return 0;
}
