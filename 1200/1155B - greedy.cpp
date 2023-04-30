// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	string s; cin >> s;
	int cnt = 0 , c = (n-11)/2;
	int p = c;
	if ((n-11)%2)p++;
	for (int i=0;i<n;i++) {
		if (s[i] != '8' && p > 0) {
			p--;
			s[i] = 'x';
		}
	}
	for (int i=0;i<n;i++) {
		if (s[i] == '8' && c > 0) {
			s[i] = 'x';
			c--;
		}
	}
	bool ans = 0;
	for (int i=0;i<n;i++) {
		if (s[i] != 'x') {
			if (s[i] == '8') ans = 1;
			break;
		}
	}

	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;
}