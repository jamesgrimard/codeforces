// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<long long > a(n);
	long long total = 0;
	for (int i=0;i<n;i++) {cin >> a[i];total+=a[i];}
	sort(begin(a),end(a));
	int m; cin >> m;
	for (int i=0;i<m;i++) {
		long long D,AP; cin >> D >> AP;
		int l=0,r=n-1,mid;
		while (l<=r) {
			mid = (l+r)/2;
			if (a[mid] <= D) l = mid + 1;
			if (a[mid] > D) r = mid - 1; 
		}
		long long ans = max(0LL,AP-(total-a[r]))+max(0LL,D-a[r]);
		if (r != n-1) {
			if (ans > max(0LL,AP-(total-a[r+1]))+max(0LL,D-a[r+1])) ans = max(0LL,AP-(total-a[r+1]))+max(0LL,D-a[r+1]);
		}
		cout << ans << '\n';
	}

	return 0;	
}