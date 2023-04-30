// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		bool ans = 0;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=1;i<n;i++) if (abs(a[i]-a[i-1]) > 1) {
			ans = 1;
			cout << "YES\n";
			cout << i << " " << i + 1;
			break;
		}
		if (ans == 0) cout << "NO";
		cout << '\n';
	}
	
	return 0;
}