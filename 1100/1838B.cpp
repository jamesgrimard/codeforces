//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int one , two , mx;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x == 1) one = i + 1;
			if (x == 2) two = i + 1;
			if (x == n) mx = i + 1;
		}

		if ((mx > two && mx < one) || (mx > one && mx < two)) {
			cout << "1 1\n";
		} else if (one < two) {
			if (mx > one) {
				cout << mx << " " << two << '\n';
			} else {
				cout << mx << " " << one << '\n';
			}
		} else {
			if (mx > one) {
				cout << mx << " " << one << '\n';
			} else {
				cout << mx << " " << two << '\n';
			}
		}
	}

	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
