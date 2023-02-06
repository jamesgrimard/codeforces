// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	map<int,int> m;
	for (int i=0;i<tt;i++){
		int x;
		cin >> x;
		m[x]++;
	}

	int sum = 0;
	for (auto [k,v] : m) {
		if (v >= 3 && k != 0) {
			cout << -1 << endl;
			exit(0);
		}
		if (v == 2 && k != 0) sum++;
	}

	cout << sum << endl;

	return 0;
}