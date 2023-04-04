// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<long long> a(n);
	long long total =0 ;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n-1;i++) {
		int p = 1;
		while (i + p < n) p *= 2;
		p /= 2;
		total += a[i];
		a[i+p] += a[i];
		cout << total << '\n';
	}


	return 0;
}
