// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	int mn = 10000;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=n-1;i>=1;i--) mn = min(mn,max(a[i],a[i-1]));
	cout << min(min(a[0],a[n-1]),mn);

	return 0;
}
