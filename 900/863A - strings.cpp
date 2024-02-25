// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	string S = "" ;

	for (int i=size(s)-1;i>=0;i--) {
		if (s[i] != '0') {
			S = s.substr(0,i+1); break;
		}
	}

	bool ans = 1;

	for (int i=0;i<size(S)/2;i++){
		if (S[i] != S[size(S)-1-i]) {
			ans = 0; break;
		}
	}

	(ans == 1) ? cout << "YES" : cout << "NO";

	return 0;
}