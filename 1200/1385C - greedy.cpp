// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n+1);
		for (int i=1;i<=n;i++) cin >> a[i];
		bool F = 0;
		int index = 0;
		for (int i=n-1;i>=1;i--) {
			if (a[i] < a[i+1]) F = 1;
			if (a[i] > a[i+1] && F == 1) {
				index = i;
				break;
			} 
		}
		cout << index << '\n';
	}

	return 0;
}