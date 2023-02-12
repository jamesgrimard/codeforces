// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	string S = "Bulbasaur";
	map<char,int> m;
	for (int i=0;i<size(S);i++) m[S[i]] = -1;
	for (int i=0;i<size(s);i++) {
		if (m[s[i]] == -1) {
			m[s[i]] = 1;
		} else if (m[s[i]] >= 1) m[s[i]]++;
	}

	int mn = 20000;
	for (auto [k,v] : m) {	
		if (v == -1) {mn = 0;continue;}
		if (v == 0) continue;	
		if (k == 'u' || k == 'a') {
			mn = min(v/2,mn);
		} else {
			mn = min(v,mn);
		}
	}

	cout << mn << '\n';

	return 0;
}



