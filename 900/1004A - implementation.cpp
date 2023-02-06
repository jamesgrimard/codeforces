// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	
	int n , m ; cin >> n >> m;

	vector<int> a(n); 
	for (int i=0;i<n;i++) cin >> a[i];
	long long total = 2;
	for (int i=1;i<n;i++) {
		if (a[i]-a[i-1] >= 2*m) {
			total += min(a[i]-a[i-1]-(2*m)+1,2);
		}
	} 
	cout << total;

	return 0;
}

