// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s; cin >> s;
	map<char,int> m;
	int cnt = 0;
	for (int i=0;i<s.size();i++) {
		if (tolower(s[i]) == s[i]) {
			m[s[i]]++;
		} else {
			if (m[tolower(s[i])] == 0) {
				cnt++;
			} else {
				m[tolower(s[i])]--;
			}
		}
	}

	cout << cnt;

	return 0;
}

