// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		map<char,bool> m;
		for (int i=0;i<size(s)-1;i++){
			if (s[i] == s[i+1]) {
				s.erase(i,2); i = max(-1,i-1);
				if (size(s) == 0) break;
			}
		}
		for (int i=0;i<size(s);i++) m[s[i]] = 1;
		for (auto [k,_] : m) cout << k;
		cout << '\n';
	}


	return 0;
}
