// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	int w = 0;
	bool ans = 1;
	for (int i=0;i<8;i++) {
		string s; cin >> s;
		for (int j=0;j<size(s);j++) {
			if (s[j] == 'W') w++;
			if (j > 0 && s[j] == s[j-1]) ans = 0;
		}
	}
	
	(w == 32 && ans == 1) ? cout << "YES" : cout << "NO";

	return 0;
}



