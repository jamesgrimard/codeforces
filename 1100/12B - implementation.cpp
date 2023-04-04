// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	string a , b; cin >> a >> b;
	char mn;
	for (int i=0;i<a.size();i++) {
		if ((a[i] < mn && a[i] != '0') || i == 0) mn = a[i];
	}
	sort(begin(a),end(a));
	string s = "";
	s += mn;
	bool f= 0;
	for (int i=0;i<a.size();i++) {
		if (a[i] == mn && f == 0) {
			f = 1;
			continue;
		}
		s += a[i];
	}

	s == b ? cout << "OK" : cout << "WRONG_ANSWER";

	return 0;
}
