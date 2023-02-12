// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s , S; cin >> s >> S;
	
	char mn = S[0];

	for (int i=0;i<size(s);i++) {
		if (s[i] < mn || i == 0) {
			cout << s[i];
		} else {
			break;
		}
	}
	cout << S[0];

	return 0;
}



