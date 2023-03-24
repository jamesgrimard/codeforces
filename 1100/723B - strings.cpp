// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s; cin >> s;

	int cnt = 0 , mx = 0 ,tally = 0;
	bool start = 0;

	for (int i=0;i<n;i++) {
		
		if (s[i] == '(') start = 1;
		if (s[i] == ')') start = 0;
		if (s[i] == ')' || s[i] == '(' || s[i] == '_') continue;
		
		tally++;

		if (s[i+1] == '(' || s[i+1] == ')' || s[i+1] == '_' || i == n-1) {
			if (start == 1) cnt++;
			if (start == 0) mx = max(mx,tally);
			tally = 0;
		}
		
	}

	cout << mx << " " << cnt;

	return 0;
}

