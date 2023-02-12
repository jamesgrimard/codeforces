// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	string s; cin >> s;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];

	bool f = 0;
	int mn = 0;
	for (int i=0;i<n-1;i++) {
		if (s[i] == 'R' && s[i+1] == 'L') {
			f = 1;
			if (mn == 0) mn = a[i+1] - a[i];
			mn = min(a[i+1]-a[i],mn);
		}
	}
	(f == 1) ? cout << mn / 2 : cout << -1;
	

	return 0;
}
