// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , p; cin >> n >> p;
	string s; cin >> s;
	bool ans = 0;
	for (int i=0;i<n-p;i++) {
		if (s[i+p] != s[i] || s[i] == '.') ans = 1;
		
		if (s[i+p] == '.' && s[i] == '.') {
			s[i] = '0' , s[i+p] = '1';
		} else if (s[i+p] == '.') {
			if (s[i] == '0') s[i+p] = '1';
			if (s[i] == '1') s[i+p] = '0';
		} else if (s[i] == '.') {
			if (s[i+p] == '0') s[i] = '1';
			if (s[i+p] == '1') s[i] = '0';
		}
	}
	if (ans) {
		for (int i=n-p;i<n;i++) if (s[i] == '.') s[i] = '0';
		cout << s;
	} else {
		cout << "No\n";
	}

	return 0;	
}

		