// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n); int p = 0;
		for (int i=0;i<n;i++){
			int x; cin >> x;
			if (i==0) {
				a[i] = 1; 
			} else {
				a[i] = x - p;
			}
			p = x;
		}
		for (int i=0;i<n;i++) {
			if (a[i] > 1) {
				a[i]--; break;
			}
		}
		bool flag = 0 , ans = 1;
		for (int i=size(a)-1;i>=0;i--) {
			if (a[i] < 2) continue;
			if (a[i] == 2 && flag == 0) {
				a[i]--; 
				flag = 1; continue;
			}
			if (a[i] > 1) {
				ans = 0; break;
			}
		}
		(ans == 1) ? cout << "YES" : cout << "NO";
		cout << '\n';
	}


	return 0;
}
