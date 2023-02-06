// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int y,x;
	cin >> y >> x;

	vector<vector<int>> a(2);

	for (int i=0;i<y;i++) {
		string s;
		cin >> s;
		a.resize(4);
		for (int j=0;j<x;j++) {
			if (s[j] == '*') {
				a[0].push_back(i + 1); a[1].push_back(j + 1);
			}
		}
	}
	for (int i=0;i<2;i++) {
		map<int,int> m;
		for (int j=0;j<4;j++) {
			m[a[i][j]]++;
		}
		for (auto [k,v] : m) {
			if (v == 1 && k != 0) cout << k << ' ';
		}
	}
	cout << endl;
	return 0;
}