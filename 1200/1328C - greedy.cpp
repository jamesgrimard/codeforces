// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		string a = "" , b = "" ;
		bool f=1;
		for (int i=0;i<n;i++) {
			if (i == 0) {
				if (s[i] == '0') {
					a += '3';
					b += '3';
				} else if (s[i] == '2') {
					a += '1';
					b += '1';
				} else {
					a += '2';
					b += '2';
				}
			} else {
				if (s[i] == '0') {
					a += '0';
					b += '0';
				} else if (s[i] == '2') {
					if (f == 0) {
						a += '0';
						b += '2';
					} else {
						a += '1';
						b += '1';
					}
				} else {
					if (f == 1) {
						a += '1';
						b += '0';
						f = 0;
					} else {
						a += '0';
						b += '1';
					}
				}
			}
		}
		cout << a << '\n' << b << '\n';
	}

	return 0;
}