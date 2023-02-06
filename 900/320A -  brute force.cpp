// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s;
	cin >> s;

	for (int i=0;i<size(s);i++){
		if (s[i] != '1' && s[i] != '4' || (i == 0 && s[i] == '4')) {
			cout << "NO"; return 0;
		}
		if (s[i] == '4') {
			if (s[i-1] == '4' && s[i-2] != '1') {
				cout << "NO"; 
				return 0;
			}
		}
	}

	cout << "YES";

	return 0;
}

