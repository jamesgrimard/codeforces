// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		string s; cin >> s;
		vector<int> a(n);
		for (int i=0;i<n;i++) {
			if (i == 0) {
				(s[i] == 'B') ? a[0] = 1 : a[0] = 2;
				continue;
			}
			(s[i] == 'B') ? a[i] = a[i-1]+1 : a[i] = a[i-1]+2;
		}
		int count = n;
		for (int i=k-1;i<n;i++) {
			if (i-k < 0) {
				count = min(count,a[i]-k);
			} else {
				count = min(count,a[i]-a[i-k]-k);
			}
		}
		cout << count << '\n';
		
	}

	return 0;
}
