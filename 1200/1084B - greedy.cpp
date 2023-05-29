// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , k; cin >> n >> k;
	vector<long long> a(n),s(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(rbegin(a),rend(a));
	for (int i=n-2;i>=0;i--) {
		s[i] = a[i] - a[n-1]; 
		s[i] += s[i+1];
	}
	long long sum = k - s[0];

	if (sum <= 0) {
		cout << a[n-1];
	} else {
		long long ans = sum / n;
		if (sum % n != 0) ans++;
		a[n-1] -= ans;
		if (a[n-1] < 0) {
			cout << -1;
		} else {
			cout << a[n-1];
		}
	}
	

	return 0;	
}