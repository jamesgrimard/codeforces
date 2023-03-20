// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , M; cin >> n  >> M;
	
	map<string,bool> m;

	string ans = "";

	for (int i=0;i<n;i++) {
		string s; cin >> s;
		string S = s;
		reverse(begin(S),end(S));
		if (S == s) {
			ans = s;
			continue;
		}
		m[s] = 1;
	}
	for (auto [k,v] : m) {
		if (v == 0) continue;
		string sr = k;
		reverse(sr.begin(),sr.end());
		if (m[sr] == 1) {
			ans = sr + ans + k;
			m[sr] = 0;
			m[k] = 0;
		}
	}
	cout << size(ans) << '\n';
	cout << ans << '\n';

	return 0;
}

