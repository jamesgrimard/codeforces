// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		string s; cin >> s;
		int f= 1;
		int cnt = 0;
		for (int i=0;i<n;i++) {
			for (int j=i+1;j<n;j++) {
				if (s[i] == '(') {
					cnt++;
					i = j;
					if (i == n-1) f= 0;
					break;
				} else {
					if (s[j] == s[i]) {
						cnt++;
						i = j;
						if (i == n-1) f= 0;
						break;
					}
				}
				if (j == n-1) {
					f = j- i + 1;
					i = j;
				}
			}			
			
		}
		cout << cnt << " " << f << '\n';
	}

	return 0;
}