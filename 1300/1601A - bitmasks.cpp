// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(30);
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			int p = 1 , cnt = 0;
			while (cnt < 30) {
				if ((x&p) == p) a[cnt]++;
				p <<= 1;
				cnt++;
			}
		}
		for (int i=1;i<=n;i++) {
			bool f= 0;
			for (int j=0;j<30;j++) {
				if (a[j] == 0) continue;
				if (a[j] % i != 0) f = 1;
			}
			if (f == 0) cout << i << " ";
		}
		cout << '\n';

	}

	return 0;	
}