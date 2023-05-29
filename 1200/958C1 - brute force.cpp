// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
 	int n , k; cin >> n >> k;
 	vector<long long> a(n),l(n),r(n);
 	for (int i=0;i<n;i++) {
 		cin >> a[i];
 		l[i] = a[i] % k;
 		if (i > 0) l[i] += l[i-1];
 	}
 	for (int i=n-1;i>=0;i--) {
 		r[i] = a[i] % k;
 		if (i < n-1) r[i] += r[i+1];
 	}
 	long long mx = 0;
 	for (int i=0;i<n-1;i++) mx = max((l[i]%k)+(r[i+1]%k),mx);

 	cout << mx;

	return 0;	
}

		