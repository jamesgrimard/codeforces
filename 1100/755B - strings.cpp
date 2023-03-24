// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a, b; cin >> a >> b;
	
	map<string,int> m;
	for (int i=0;i<a+b;i++) {
		string s; cin >> s;
		m[s]++;
	}

	if (a > b) {
		cout << "YES\n";
		return 0;
	}

	if (a < b) {
		cout << "NO\n";
		return 0;
	}

	int cnt = 0;
	for (auto [k,v] : m) if (v == 2) cnt++;

	(cnt % 2 == 1) ? cout << "YES\n" : cout << "NO\n";


	return 0;
}

