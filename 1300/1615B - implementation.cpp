// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	vector<vector<int>> a(200001,vector<int>(32));
	for (int i=1;i<=200000;i++) {
		for (int j=0;j<32;j++) a[i][j] = a[i-1][j];
		int k = 1,cnt=0;
		while (k <= i) {
			if ((i&k) == k) a[i][cnt]++;
			k <<= 1;
			cnt++;
		}
	}
	while (tt--) {
		int L,R; cin >> L >> R;
		int mx = 0;
		for (int i=0;i<32;i++) mx = max(mx,a[R][i]-a[L-1][i]);
		cout << R-L+1 - mx << '\n';
 
	}
 
 
	return 0;	
}