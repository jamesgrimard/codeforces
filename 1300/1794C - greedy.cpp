// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			int l = 0 , r = i , m ;
			while (l <= r) {
				m = (l+r) / 2;
				if (a[m] < (i-m+1)) l = m + 1;
				if (a[m] >= (i-m+1)) r = m - 1;
			}
			cout << i - l + 1 << " ";
		}
		cout << '\n';
	}


	return 0;	
}

		