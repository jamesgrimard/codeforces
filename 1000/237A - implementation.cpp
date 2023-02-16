// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	map<string,int> m;
	for (int i =0;i<n;i++) {
		string a , b; cin>>a >> b;
		if (size(a) == 1) a = "0"+a;
		if (size(b) == 1) b = "0"+b;
		a += b;
		m[a]++;
	}
	int mx = 1;
	for (auto [k,v] : m) {
		//cout << k << " " << v << '\n';
		mx = max(v,mx);
	}

	cout << mx;

	return 0;
}



