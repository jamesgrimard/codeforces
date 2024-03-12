// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int cnt = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x == 1) cnt++;
		}
		cout << cnt / 2 + (n - cnt/2*2) << '\n';
	}
	                    

                  



	return 0;
}