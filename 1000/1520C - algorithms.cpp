// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt; 
	while (tt--) {
		int n ;cin >> n;
		if (n == 2) {
			cout << -1;
		} else {
			int s1 = 1 , s2 = 2;
			for (int i=0;i<n;i++) {
				for (int j=0;j<n;j++) {
					if (s1 > n*n) {
						cout << s2 << " ";
						s2+=2;
					} else {
						cout << s1 << " ";
						s1 += 2;
					}
				}
				cout << '\n';
			}
		}
		cout << '\n';
	}

	return 0;
}
