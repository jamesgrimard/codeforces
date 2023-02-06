// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n , m; cin >> n >> m;

		bool possible = false , even = false;

		if (m % 2 == 0) even = true;

		for (int i=0;i<n;i++) {

			int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;

			if (y1 == x2) possible = true;

		}
		
		(possible == true && even == true) ? cout << "YES" : cout << "NO";

		cout << '\n';
	}

	return 0;
}

