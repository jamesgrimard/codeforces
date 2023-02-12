// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	string s; cin >> s;

	int mx = 0;
	map<char,bool> m;
	for (int i=0;i<n;i++) {
		if (tolower(s[i]) != s[i]) {
			mx = max((int)size(m),mx);
			m.clear();
			continue;
		}
		m[s[i]] = 1;
	}
	cout << max(mx,(int)size(m));

	

	return 0;
}



