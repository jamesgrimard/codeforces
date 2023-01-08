// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;

	string s; cin >> s;

	map<char,int> m;

	for (int i=0;i<size(s);i++) m[s[i]]++;

	bool ans = true;

	for (auto [_,v] : m) {
		if (v > k) ans = false;
	}	

	(ans == true) ? cout << "YES" : cout << "NO";

	return 0;
}

