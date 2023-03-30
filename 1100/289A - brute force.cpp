// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , k; cin >> n >> k;
	int cnt = 0;
	for (int i=0;i<n;i++) {
		int l ,r ; cin >> l >> r;
		cnt += (r-l+1);
	}
	cout << (k - (cnt % k)) % k;

	return 0;
}
