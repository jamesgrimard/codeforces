// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;
	map<int,int> m;
	for (int i=0;i<n-1;i++) {
		int x , y; cin >> x >> y;
		m[x]++; m[y]++;
	}
	int tally = 0;
	for (auto [k,v] : m) {
		if (v == 1) tally++;
	}
	cout << tally;

	return 0;
}



