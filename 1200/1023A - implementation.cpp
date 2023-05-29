// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m; cin >> n >> m;
	string s,S; cin >> s >> S;

	if (n > m + 1) {
		cout << "NO\n";
		return 0;
	}
	bool f= 1;
	for (int i=0;i<n;i++) {
		if (s[i] != S[i]) {
			if (s[i] != '*') f = 0;
			break;
		}
		if (i == n -1 && n != m) f= 0;
	}
	int l = n-1, r = m-1;
	while (s[l] != '*' && f == 1 && l >= 0) {
		if (s[l] != S[r]) f = 0;
		l-- , r--;
	}

	f == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;	
}