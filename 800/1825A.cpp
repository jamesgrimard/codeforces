#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		bool flag = 0;
		for (int i=1;i<s.size();i++) if (s[i] != s[i-1]) flag = 1;
		(flag) ? cout << s.size()-1 : cout << -1;
		cout << '\n';
	}


	return 0;
}