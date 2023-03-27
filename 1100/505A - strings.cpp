// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int n = s.size();
	for (int i=0;i<n;i++) {
		if (s[i] != s[n-1-i]) {
			string a = s.substr(0,i) + s.substr(n-1-i,1) + s.substr(i,n-i);
			string b = s.substr(0,n-i) + s.substr(i,1) + s.substr(n-i,n-(n-i));
			bool fa = 1 , fb = 1;
			for (int i=0;i<n+1;i++) {
				if (a[i] != a[n-i]) fa = 0;
				if (b[i] != b[n-i]) fb = 0;
			}
			if (fa == 1) {
				cout << a;
			} else if (fb == 1) {
				cout << b;
			} else {
				cout << "NA";
			}
			break;
		}
		if (i == n/2) {
			s.insert(i,1,s[i]);
			cout << s;
			break;
		}
	}

	return 0;
}

