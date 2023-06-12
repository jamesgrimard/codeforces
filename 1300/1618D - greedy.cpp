// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n,k; cin >> n>>k;
		vector<int> a(n);
		int p=n-1-k,t=n-1,sum=0;
		for (int i=0;i<n;i++) cin >> a[i];
		sort(begin(a),end(a));
		if (n > 1) {
			while (k > 0 && p >= 0) {
				if (a[t] == 0) {
					t--;
					if (t == p) p--; 
					continue;
				}
				sum += a[p]/a[t];
				a[p] = 0 , a[t] = 0;
				t--;
				k--;
				p--;
			}
		}
		int l=0,r=n-1;
		while (l < r && k > 0) {
			if (a[l] == 0) {
				l++;
			} else if (a[r] == 0) {
				r--;
			} else {
				sum += a[l]/a[r];
				l++,r--;
				k--;
			}
		}
		for (auto v:a) sum += v;
		cout << sum << '\n';
	}

	return 0;	
}