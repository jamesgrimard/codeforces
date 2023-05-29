// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , k; cin >> n >> k;
	vector<long long> a(n);
	long long mxx = 0 , index = 0;
	for (int i=0;i<n;i++) {
		cin >> a[i];	
		if (a[i] > mxx) {
			mxx = a[i];
			index = i;
		}
	}
	if (k >=n) {
		cout << mxx;
		return 0;
	}
	long long mx = -1,cnt=0,p=a[0];
	for (int i=1;i<n;i++) {
		if (a[i] < p) cnt++;
		if (cnt == k) {
			mx = p;
			break;
		}
		if (a[i] > p) {
			cnt = 1;
			p = a[i];
		}
	}
	if (mx == -1) {
		cout << mxx;
	} else {
		cout << mx;
	}

	return 0;	
}

		