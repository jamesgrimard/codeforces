// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n, m ; cin >> n >> m ;
	vector<int> a(n) , b(100001);
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=n-1;i>=0;i--) {
		if (b[a[i]] == 0) {
			b[a[i]]++;
			if (i == n-1) {
				a[i] = 1;
			} else {
				a[i] = a[i+1]+1;
			}
		} else {
			a[i] = a[i+1];
		}
	}
	for (int i=0;i<m;i++) {
		int x; cin >> x;
		cout << a[x-1] << '\n';
	}

	return 0;
}