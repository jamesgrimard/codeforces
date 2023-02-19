// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	string s; cin >> s;
	map<char,int> m;
	for (int i=0;i<size(s);i++) m[s[i]]++;
	bool ans = 1;
	for (auto [_,v] : m) {
		if (v % n != 0) {
			ans = 0;
		}
	}
	if (ans == 1) {
		for (int i=0;i<n;i++) {
			for (auto [k,v] : m) {
				for (int j=0;j<v/n;j++) cout << k;
			}
		}
		
	} else {
		cout << -1;
	}

	return 0;
}



