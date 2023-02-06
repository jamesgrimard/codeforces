// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int l , r ; cin >> l >> r;

		if (l==r) {
			(l%2==0) ? cout << l : cout << (l*-1);
			cout << '\n'; continue;
		} 

		(r % 2 == 0) ? r/=2 : r=(r/2+1)*-1;

		if (l == 1) {
			cout << r;
		} else {
			if ((l-1) % 2 == 1) {
				l = ((l-1)/2+1)*-1;
			} else {
				l/=2;
			}
			cout << (r-l);
		}
		cout <<'\n';
		
	}

	return 0;
}

