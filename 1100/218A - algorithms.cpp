// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int k; cin >> k;
	vector<int> a(2*n+1);
	for (int i=0;i<2*n+1;i++) cin >> a[i];
	for (int i=0;i<2*n+1;i++) {
		if (i % 2 == 1 && k > 0 && a[i]-1 > a[i-1] && a[i]-1 > a[i+1]) {
			cout << a[i] - 1 << " ";
			k--;
		} else {
			cout << a[i] << " ";
		}
	}

	return 0;
}
