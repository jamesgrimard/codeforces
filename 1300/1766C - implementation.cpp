// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<string> s(2); cin >> s[0] >> s[1];
		bool f = 0;
		int k = 0;
		for (int i=n-1;i>=0;i--) {
			if (s[0][i] == 'W') {
				k = i;
				f = 0;
			}
			if (s[1][i] == 'W') {
				k = i;
				f = 1;
			}
		}
		if (k % 2 == 0) f = !f;
		for (int i=0;i<n;i++) {
			int y = 0 , x = i;
			if (s[0][i] == 'B' || s[1][i] == 'B') {
				if (s[0][i] == 'B' && s[1][i] == 'B') {
					y = f;
				} else if (s[1][i] == 'B') {
					y = 1;
				}
				while (s[y][x] != 'W') {
					s[y][x] = 'W';
					if (s[(y+1)%2][x] == 'B') {
						y = (y + 1) % 2;
					} else {
						if (x == n-1) break;
						x++;
					}
				}
			} else {
				continue;
			}
			break;
		}
		bool ans = 1;
		for (int i=0;i<n;i++) {
			if (s[0][i] == 'B' || s[1][i] == 'B') {
				ans = 0;
				break;
			}
		}
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;	
}

		