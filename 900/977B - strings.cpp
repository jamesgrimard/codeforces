// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	string s;
	cin >> tt >> s;

	map<string,int> m;

	for (int i=1;i<tt;i++){
		string x = string(1,s[i-1]) + s[i];
		m[x]++;
	}

	string out;
	int mx = 0;
	for (auto [k,v] : m) {
		if (v > mx) {
			out = k;
			mx = v;
		}
	}

	cout << out << '\n';

	return 0;
}

