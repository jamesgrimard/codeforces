// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		int K = k;
		string s; cin >> s;
		vector<int> a(n);
		if (K%2) {
			for (int i=0;i<n;i++) {
				if (s[i] == '1' && k > 0) {
					a[i]++;
					k--;
				}
				if (i == n-1) while (k--) a[i]++;
			}
		} else {
			for (int i=0;i<n;i++) {
				if (s[i] == '0' && k > 0) {
					a[i]++;
					k--;
				}
				if (i == n-1) while (k--) a[i]++;
			}
		}
		for (int i=0;i<n;i++) {
			if (K%2 == a[i]%2) {
				cout << s[i];
			} else {
				(s[i] == '1') ? cout << 0 : cout << 1;
			}
		}

		cout << '\n';
		for (auto v:a) cout << v << " ";
		cout << '\n';
	}
	
	return 0;	
}