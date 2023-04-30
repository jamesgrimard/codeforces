// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s,S; cin >> s >> S;
		int l = 0 , L = 0;
		bool ans = 1;
		if (s.size() > S.size()) ans = 0;
		while (l < s.size() && ans == 1) {
			if (s[l] == S[L]) {
				l++;
				L++;
			} else {
				if (l > 0) while (S[L] == s[l-1] && L < S.size()) L++;
				if (L == S.size() || S[L] != s[l]) ans = 0;
			}
		} 
		if (ans == 1 && L < S.size()) {
			for (int i=L;i<S.size();i++) if (S[i] != S[i-1]) ans = 0;
		}
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}