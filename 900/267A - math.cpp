// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int a , b ; cin >> a >> b;
		int tally = 0;
		if (b > a) swap(a,b);
		while (b > 0) {
			tally += (a/b);
			int k = a % b;
			a = b; b = k;
			if (b > a) swap(a,b);
		}
		cout << tally << '\n';
	}


	
	

	return 0;
}

