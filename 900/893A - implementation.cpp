// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >>n ;

	//vector<pair<int,int>> a(n);

	bool ans = 1;

	pair<int,int> p;

	for (int i=0;i<n;i++) {
		int w; cin >> w;

		if (i == 0) {
			p.first = w; p.second = 3;
			if (w == 3) ans = 0;
			continue;
		}

		if (w == p.second || w == p.first) {
			for (int j=1;j<=3;j++) {
				if (p.first != j && p.second != j) {
					p.second = j; break;
				}
			}
			p.first = w;
		} else {
			ans = 0;
		}
		
	}

	(ans == 0) ? cout << "NO" : cout << "YES";

	return 0;
}

