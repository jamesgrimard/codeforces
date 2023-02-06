// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s ; cin >> s;

	for (int i=1;i<n-1;i++) {
		if (s[i-1] == 'o' && s[i] == 'g' && s[i+1] == 'o') {
			s[i-1] = '*' ; s[i] = '*' ; s[i+1] = '*' ;
			i++; continue;
		}
		if ((s[i-1] == '*' || s[i-1] == '-') && s[i] == 'g' && s[i+1] == 'o') {
			s[i] = '-' ; s[i+1] = '-'; 
			i++; continue;
		}
	}

	regex r("-");
	s = regex_replace(s,r,"");

	cout << s << '\n';

	return 0;
}

