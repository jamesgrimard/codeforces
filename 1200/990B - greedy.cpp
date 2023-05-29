// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , k; cin >> n >> k;
	vector<int> a(n),d(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	for (int i=1;i<n;i++) d[i] = a[i]-a[i-1];
	int index = 0;
	for (int i=n-1;i>=0;i--) {
		if (d[i] != 0) {
			index = i;
			break;
		}
	}
	long long cnt = 0 , tally = 0;
	for (int i=1;i<n;i++) {
		if (d[i] > k) tally = 0;
		if (d[i] <= k && d[i] > 0) {
			cnt += (tally+1);
			tally = 0;
		}
		if (d[i] == 0) tally++;
	}
	cout << n - cnt;
 
	return 0;	
}