// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s; cin >> s;
	int cnt_l = 0 , cnt_r = 0, cnt_u = 0, cnt_d = 0;
	for (int i=0;i<n;i++) {
		if (s[i] == 'L') cnt_l++;
		if (s[i] == 'R') cnt_r++;
		if (s[i] == 'U') cnt_u++;
		if (s[i] == 'D') cnt_d++;
	}

	cout << (min(cnt_l,cnt_r) + min(cnt_u,cnt_d)) * 2;


	return 0;
}



