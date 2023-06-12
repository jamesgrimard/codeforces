// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n,k; cin >> n >> k;
		vector<int> a(n);
		map<int,int>m;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			m[a[i]]++;
		}
		int L = 0 , R = 0 , mx = -1 , p = 0;
		for (auto [K,v]:m) {
			if (K < p) continue;
			if (v >= k) {
				int l = K , r = K;
				while(m[r+1] >= k) r++;
				if (r - l > mx) {
					mx = r - l;
					L = l , R = r;
				}
				p = r + 1;
			}
		}
		mx == -1 ? cout << mx : cout << L << " " << R;
		cout << '\n';
	}


	return 0;	
}