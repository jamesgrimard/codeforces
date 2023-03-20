// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	string s; cin >> s;
	map<char,int> m;
	int tally = 0;
	for (int i=0;i<n;i++) {
		tally++;
		if (i == n-1 || s[i] != s[i+1]) {
			m[s[i]] = m[s[i]] + tally/k;
			tally = 0;
		}
	}
	int mx = 0;
	for (auto [k,v] : m) {
		//cout << k << " " << v << '\n';
		mx = max(v,mx);
	}
	cout << mx << '\n';

	return 0;
}

