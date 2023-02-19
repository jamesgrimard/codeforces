// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	for (int i=1;i<size(s);i++) {
		if ((char)toupper(s[i]) != s[i]) {
			cout << s;
			return 0;
		}
	}
	for (int i=0;i<size(s);i++) {
		((char)toupper(s[i]) == s[i]) ? cout << (char)tolower(s[i]) : cout << (char)toupper(s[i]); 
	}


	return 0;
}



