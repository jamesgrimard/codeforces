// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	string s; cin >> s;
	
	for (int i=0;i<n;i++) {
		if (i == 0 && size(s) != 1 && k > 0) {
			if (s[i] != '1') {
				s[i] = '1'; k--;
			}
			continue;
		}
		if (k > 0) {
			if (s[i] != '0') {
				s[i] = '0'; k--;
			}
		}
	}

	cout << s;

	return 0;
}


