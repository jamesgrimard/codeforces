// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		string S = s;
		bool f = 0 , F = 0, n = 0;
		for (int i=0;i<s.size();i++) {
			int k = s[i];
			if (k >= 48 && k <= 57) {
				s[i]='1';
				n=1;
			} else if (k >= 97 && k <= 122) {
				s[i]='2';
				f=1;
			} else if (k >= 65 && k <= 90) {
				s[i]='3';
				F=1;
			}
		}
		if (f && F && n) {
			cout << S << '\n';
		} else {

			for (int i=1;i<s.size();i++) {
				if (s[i] != s[i-1]) {
					if (i == s.size()-1) {
						if (f == 0) {
							S[i-2] = char(97);
						} else if (F == 0) {
							S[i-2] = char(65);
						} else {
							S[i-2] = char(48);
						}
					} else {
						if (f == 0) {
							S[i+1] = char(97);
						} else if (F == 0) {
							S[i+1] = char(65);
						} else {
							S[i+1] = char(48);
						}
					}
					break;
				}
				if (i == s.size()-1) {
					if (s[i-2] == '1') {
						S[i] = char(97);
						S[i-1] = char(65);
					} else if (s[i-2] == '2') {
						S[i] = char(48);
						S[i-1] = char(65);
					} else {
						S[i] = char(48);
						S[i-1] = char(97);
					}
				}
			}
			cout << S << '\n';
		}

	}

	return 0;	
}