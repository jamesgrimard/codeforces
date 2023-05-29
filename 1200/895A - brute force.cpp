// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];

	int mn = 360;
	for (int i=0;i<n;i++) {
		vector<int> l(n),r(n);
		for (int j=0;j<n;j++) {
			l[j] = a[(i+j)%n];
			r[n-1-j] = a[(i+n-1-j)%n];
			if (j > 0) {
				l[j] += l[j-1];
				r[n-1-j] += r[n-1-j+1];
			}
		}

		for (int j=0;j<n-1;j++) {
			mn = min(mn,abs(l[j]-r[j+1]));
		}
	}
	

	cout << mn;

	return 0;	
}

		