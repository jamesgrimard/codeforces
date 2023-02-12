// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int cnt = 0;
	bool flag = 0;
	for (int i=0;i<size(s);i++) {
		if (s[i] == '1') flag = 1;
		if (flag == 1 && s[i] == '0') cnt++;
	}
	(cnt >= 6) ? cout << "yes" : cout << "no";

	return 0;
}



