// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;

		vector<int> a(n);

		for (int k=n-1;k>=0;k--){
			for (int i=n-1;i>=0;i--) {
				if (i+k == (int)sqrt(i+k)*(int)sqrt(i+k)) {
					for (int j=i;j<n;j++) {
						if (a[j] != 0) break;
						a[j] = k;
						k--;
					}
				}
			}
		}
		
		for (auto v:a) cout << v << " ";
		cout << '\n';

	}

	return 0;
}