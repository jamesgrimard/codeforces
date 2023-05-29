// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	vector<int> a(n),s(n),l(n),r(n),o;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		s[i] = a[i] % 2;
	}
	int p = 0, q = 0;
	for (int i=0;i<n;i++) {
		if (i>0) {
			l[i] = l[i-1];
			r[i] = r[i-1];
		}
		(s[i]) ? l[i]++ : r[i]++;
	}
	for (int i=1;i<n-1;i++) if (l[i] == r[i]) o.push_back(abs(a[i]-a[i+1]));
	int ans = 0;
	sort(begin(o),end(o));
	for (int i=0;i<o.size();i++) {
		if (o[i] <= k) {
			k -= o[i];
			ans = i + 1;
		}
	}
	cout << ans ;
	

	return 0;	
}