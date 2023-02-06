// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >>s; s+='0';

	vector<pair<int,char>> a;

	int tally = 1;

	for (int i=0;i<size(s)-1;i++) {
		if (s[i] != s[i+1]) {
			pair<int,char> p;
			p.first = tally; p.second = s[i]; a.push_back(p);
			tally = 1;
		} else {
			tally++;
		}
	}

	bool ans = 1;

	if (size(a) % 2 == 0) ans = 0;

	if (a[size(a)/2].first < 2) ans = 0;

	for (int i=0;i<size(a)/2;i++) {
		if (a[i].second != a[size(a)-1-i].second || a[i].first + a[size(a)-1-i].first < 3) ans = 0;
	}

	(ans == 1) ? cout << (a[size(a)/2].first+1) : cout << 0;






	return 0;
}

