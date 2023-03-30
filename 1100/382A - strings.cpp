// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	string s; cin >> s;
	string r; cin >> r;
	string a,b;
	for (int i=0;i<s.size();i++) {
		if (s[i] == '|') {
			a = s.substr(0,i);
			b = s.substr(i+1,s.size()-(i+1));
			break;
		}
	}

	for (int i=0;i<r.size();i++) {
		if (a.size() <= b.size()) {
			a += r[i];
		} else {
			b += r[i];
		}
	}

	if (a.size() == b.size()) {
		cout << a << "|" << b;
	} else {
		cout << "Impossible";
	}
	


	return 0;
}