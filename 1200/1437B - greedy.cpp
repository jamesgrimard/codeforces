// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		vector<bool> a(n),b(n);
		for (int i=0;i<n;i++) {
			if (i % 2 == 0 && s[i] == '0' || i % 2 == 1 && s[i] == '1') a[i] = 1;
			if (i % 2 == 0 && s[i] == '1' || i % 2 == 1 && s[i] == '0') b[i] = 1;	
		}
		int cnt1 = 0 , cnt2 = 0;
		for (int i=0;i<n;i++) {
			if (a[i] == 0) {
				if (i == 0 || a[i-1] == 1) cnt1++;
			}
			if (b[i] == 0) {
				if (i == 0 || b[i-1] == 1) cnt2++;
			}
		}
		cout << min(cnt1,cnt2) << '\n';
	}

	return 0;
}