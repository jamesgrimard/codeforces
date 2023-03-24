// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int k; cin >> k;
	int cnt = 0 , cnt2 = 0;
	for (int i=size(s)-1;i>=0;i--) {
		if (s[i] == '0') cnt++;
		if (s[i] != '0') cnt2++;
		if (cnt >= k) break;
	}

	if (cnt >= k) {
		cout << cnt2;
	} else {
		cout << size(s)-1;
	}


	return 0;
}

