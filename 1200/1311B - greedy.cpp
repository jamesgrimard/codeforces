// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , m; cin >> n >> m;
		vector<int> a(n),b(n);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<m;i++) {
			int x; cin >> x;
			b[x-1] = 1;
		}
		for (int i=1;i<n;i++) {
			if (a[i] < a[i-1] && b[i-1] == 1) {
				swap(a[i],a[i-1]);
				i = max(i-2,0);
			}
		}
		bool ans = 1;
		for (int i=1;i<n;i++) if (a[i] < a[i-1]) ans = 0;
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}