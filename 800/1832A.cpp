#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		unordered_map<char,int> m;
		for (int i=0;i<s.size();i++) m[s[i]]++;
		bool flag = 1;
		for (auto [k,v] : m) {
			if (m.size() == 2 && v == 1) flag = 0;
		}
		(flag == 0 || m.size() == 1) ? cout << "NO\n" : cout << "YES\n";
	}


	return 0;
}