// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		map<int,int>m;
		int tally = 0,cnt=0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			for (int j=2;j*j<=x;j++) {
				while (x % j == 0) {
					m[j]++;
					x/=j;
				}
			}
			if (x != 1) m[x]++;
		}
		for (auto [k,v]:m) {
			tally += (v/2);
			v %= 2;
			if (v) cnt++;
		}
		cout << tally + cnt/3 << '\n';
	}

	return 0;	
}

		