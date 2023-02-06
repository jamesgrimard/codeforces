// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;cin >> tt;

	while (tt--) {

		int n,l,r ; cin >> n >> l >> r;

		vector<int> a; a.push_back(l);

		int tally = 1;

		for (int i=n;i>l;i--){
			if (i != r) {
				a.push_back(i); tally++;
			}
			if (tally == n/2) break;
		}

		tally = 1;

		a.push_back(r);

		for (int i=1;i<r;i++) {
			if (i != l) {
				bool flag = true;
				for (int j=0;j<size(a);j++){
					if (a[j] == i) flag = false;
				}
				if (flag == true) {
					a.push_back(i); tally++;
				}
			}
			if (tally == n/2) break;
		}

		if (size(a) == n) {
			for (int i=0;i<size(a);i++) cout << a[i] << " ";
		} else {
			cout << -1;
		}

		cout << '\n';

	}
	return 0;
}

