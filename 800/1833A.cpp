#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		unordered_map<string,int> m;
		m[s.substr(0,2)]++;
		for (int i=2;i<n;i++) m[s.substr(i-1,2)]++;
		cout << m.size() << '\n';
	}


	return 0;
}