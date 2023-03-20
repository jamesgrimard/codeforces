// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >>n;
	string s; cin >> s;
	string ans = "";

	int cnt = 0;
	for (int i=0;i<n;i++) {
		cnt++;
		if (i == n-1 || s[i] != s[i+1]) {
			if (s[i] == '1') ans += to_string(cnt);
			if (s[i] == '0') {
				for (int i=0;i<cnt-1;i++) ans += "0";
			}
			cnt = 0;
		}
	}
	if (s[n-1] == '0') ans += "0";
	cout << ans;

	return 0;
		
}

