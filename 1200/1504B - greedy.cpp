// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s,ss; cin >> s >> ss;
		int cnt = 0;
		vector<int> a(n+1),b(n+1),r(n+1);
		for (int i=1;i<=n;i++) {
			a[i] = a[i-1];
			b[i] = b[i-1];
			if (s[i-1] == '0') a[i]++;
			if (s[i-1] == '1') b[i]++;
		}
		for (int i=n;i>=1;i--){
			if (i < n) r[i] = r[i+1];
			if (a[i] == b[i]) r[i]++;
		}
		bool ans = 1;
		for (int i=n;i>=1;i--) {
			if (cnt % 2 == 0) {
				if (s[i-1] != ss[i-1]) {
					if ((i == n || r[i] != r[i+1]) && r[i] > cnt) {
						cnt++;
					} else {
						ans = 0;
					}
				}
			} else {
				if (s[i-1] == ss[i-1]) {
					if (r[i] != r[i+1] && r[i] > cnt) {
						cnt++;
					} else {
						ans = 0;
					}
				}
			}
			
		}
		(ans == 1) ? cout << "YES\n" : cout << "NO\n";
		
	}

	return 0;
}