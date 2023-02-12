// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int count = 0;
	int n ; cin >> n;
	string s; cin >> s;
	map<char,int> m;
	for (int i=0;i<n;i++) m[s[i]]++;
	for (auto [k,v] : m) {
		count += (v-1);
	}
	(26 - size(m) < count) ? cout << -1 : cout << count;

	return 0;
}



