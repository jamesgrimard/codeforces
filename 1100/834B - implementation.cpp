// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	string s; cin >> s;

	map<char,pair<int,int>> m;

	for (int i=0;i<n;i++) {
		if (m[s[i]].first == 0) m[s[i]].first = i+1;
		m[s[i]].second = i+1;
	}

	vector<int> a(n+1);

	for (auto [k,v] : m) {
		for (int i=v.first;i<=v.second;i++) a[i]++;
	}

	int mx = 0;

	for (auto v : a) {
		mx = max(v,mx);
	}
	
	(mx > k) ? cout << "YES\n" : cout << "NO\n";

	return 0;
		
}

