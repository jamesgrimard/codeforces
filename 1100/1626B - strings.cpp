// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		for (int i=size(s)-1;i>=1;i--) {
			if ((s[i]-'0')+(s[i-1]-'0') >= 10) {
				string A = s.substr(0,i-1) , B = s.substr(i+1,size(s)-(i+1));
				string SS = to_string((s[i]-'0')+(s[i-1]-'0'));
				cout << A + SS + B << '\n';
				break;
			}
			if (i == 1) {
				string S = to_string((s[0]-'0')+(s[1]-'0'));
				s.replace(0,2,"");
				cout <<  S + s << '\n';
			}
		}
	}

	return 0;
}

