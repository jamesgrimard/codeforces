// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int k; cin >> k;
	map<char,int> m;
	string s; cin >> s;
	
	int cnt = 0;
	
	for (int i=0;i<s.size();i++) {
		if (m[s[i]] == 0) cnt++;
		m[s[i]]++;
	}
	
	if (cnt >= k) {
		cout << "YES";
		map<char,int> M;
		for (int i=0;i<s.size();i++) {
			if (M[s[i]] == 0 && k > 0) {
				M[s[i]]++;
				k--;
				cout << '\n';
			}
			cout << s[i];
		}
	} else {
		cout << "NO\n";
	}


	return 0;
}

