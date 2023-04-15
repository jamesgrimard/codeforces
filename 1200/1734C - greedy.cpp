// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		string s; cin >> s;
		long long cnt = 0;
		for (int i=0;i<n;i++) {
			if (s[i] != '1') {
				for (int j=i;j<n;j+=(i+1)) {
					if (s[j] == '1') break;
					if (s[j] != '0') continue;
					cnt += (i+1);
					s[j] = '2';
				}
			}
		}
		cout << cnt << '\n';
	}


	return 0;
}