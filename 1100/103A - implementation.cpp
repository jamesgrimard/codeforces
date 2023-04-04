// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n; cin >> n;
	vector<long long> a(n);
	for (int i=0;i<n;i++) cin >> a[i];

	long long sum = a[n-1];
	for (int i=n-2;i>=0;i--) {
		a[i] = (a[i+1] + (a[i]-1));
		sum += a[i];
	}

	cout << sum;


	return 0;
}
