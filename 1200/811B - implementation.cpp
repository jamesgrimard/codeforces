// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m; cin >> n >> m;
	vector<int> a(n+1);
	for (int i=1;i<=n;i++) cin >> a[i];
	for (int i=0;i<m;i++) {
		int l , r , x; cin >> l >> r >> x;
		int pre = 0;
		for (int j=l;j<=r;j++) {
			if (a[j] < a[x] && j < x) pre++;
			if (a[j] < a[x] && j > x) pre++;
		}
		(pre+l == x) ? cout << "Yes\n" : cout << "No\n";
	}

	return 0;	
}

		