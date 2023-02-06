// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s;
	cin >> s;

	for (int i=(size(s)-1);i>=0;i--) {
		if (s[i] == '.') {
			if (s[i-1] == '9') {
				cout << "GOTO Vasilisa." << endl;
				exit(0);	
			}
			if (s[i+1] >= '5') s[i-1]++;
			s = s.substr(0,(i));
			break;
		}
	}
	
	cout << s << endl;

	return 0;
}