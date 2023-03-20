// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	int k = s.find("KKK");
	int v = s.find("VVV");
	int cnt = 0;

	for (int i=0;i<size(s)-1;i++) {
		if (s[i] == 'V' && s[i+1] == 'K') cnt++;
	}

	if (k != -1 || v != -1) {
		cnt++;
	} else {
		if ((size(s) > 1 && s[size(s)-2] == 'V' && s[size(s)-1] == 'V') || (s[0] == 'K' && s[1] == 'K')) cnt++;
	}

	cout << cnt;

	return 0;
}

