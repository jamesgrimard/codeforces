// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n) , b(n);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int j=n;j>=1;j--) {
			for (int i=0;i<n;i++) {
				if (a[i] == j) {
					int mx = 0 , mxi = 0;
					for (int l=i-1;l>=0;l--) {
						if (a[l] > a[i]) break;
						if (a[l] > mx) {
							mx = a[l];
							mxi = l;
						}
					}
					if (mx != 0) b[mxi] = b[i] + 1;
					mx = 0 , mxi = 0;
					for (int r=i+1;r<n;r++) {
						if (a[r] > a[i]) break;	
						if (a[r] > mx) {
							mx = a[r];
							mxi = r;
						}
					}
					if (mx != 0) b[mxi] = b[i] + 1;
				}
			}
		}
		for (auto v : b) cout << v << " ";
		cout << '\n';
	}

	return 0;
}