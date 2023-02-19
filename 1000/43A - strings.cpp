// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	map<string,int> m;
	for (int i=0;i<n;i++) {
		string s ; cin>>s;
		m[s]++;
	}
	int mx = 0;
	string ans = "";
	for (auto [k,v] : m) {
		if (v > mx) {
			mx = v;
			ans = k;
		}
	}
	cout << ans;

	return 0;
}

