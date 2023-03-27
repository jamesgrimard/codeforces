// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	map<int,int> m;
	bool f= 0;
	for (int i=0;i<6;i++) {
		int x; cin >> x;
		m[x]++;
		if (m[x] >= 4) f = 1;
	}

	if (f == 0) {
		cout << "Alien";
	} else {
		bool F = 0;
		for (auto [k,v] : m) {
			if (v == 6 || v == 2) F = 1;
		}
		F == 1 ? cout << "Elephant" : cout << "Bear";
	}


	return 0;
}

