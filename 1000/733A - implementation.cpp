// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	map<char,bool> m; m['A'] = 1 , m['E'] = 1 ,m['I'] = 1 ,m['O'] = 1 ,m['U'] = 1 ,m['Y'] = 1;
	int mn = 0 , count = 0;
	for (int i=0;i<=size(s);i++) {
		count++;
		if (m[s[i]] == 1 || i == size(s)) {
			mn = max(count,mn);
			count = 0;
		}
	}
	cout << mn;

	return 0;
}



