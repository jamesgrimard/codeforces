// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	map<int,int> m;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		m[x]++;
	}
	int count = 0;
	for (auto [k,v] : m) {
		if (v % 2 == 1) count++;
	}

	cout << (n-(count/2));

	return 0;
}