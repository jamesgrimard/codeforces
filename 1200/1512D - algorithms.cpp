// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
long long myBS(vector<long long>&a,long long l, long long r, long long x) {
	if (l <= r) {
		long long m = (l + r) / 2;
		if (a[m] == x) return m;
		if (a[m] > x) return myBS(a,l,m-1,x);
		if (a[m] < x) return myBS(a,m+1,r,x);
	}
	return -1;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	long long tt; cin >> tt;
	while (tt--) {
		long long n; cin >> n;
		vector<long long> a(n+2) , b(n+2);
		for (long long i=0;i<n+2;i++) cin >> a[i];
		sort(begin(a),end(a));
		b[0] = a[0];
		for (long long i=1;i<n+2;i++) b[i] = a[i] + b[i-1];
		if (a[n] == b[n-1]) {
			for (long long i=0;i<n;i++) cout << a[i] << " ";
		} else {
			long long index = myBS(a,0,n,b[n]-a[n+1]);
			if (index == -1) {
				cout << index;
			} else {
				for (long long i=0;i<n+1;i++) {
					if (i == index) continue;
					cout << a[i] << " ";
				}
			}
		}
		cout << '\n';
	}

	return 0;
}