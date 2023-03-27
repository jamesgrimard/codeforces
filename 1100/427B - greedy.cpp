// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , t , c; cin >> n >> t >> c;
 
	vector<int> a(n); 
	for (int i=0;i<n;i++) cin >> a[i];
	int cnt = 0 , p = 0;
	for (int i=0;i<n;i++) {
		if (a[i] > t) p = i + c;
		if (i >= c -1 && a[i] <= t && i >= p) cnt++;
	}

	cout << cnt;
 
	return 0;
}