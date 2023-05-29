// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n),l(n),r(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int p = -1;
	for (int i=n-1;i>=0;i--) {
		if (a[i] == 0) p = i;
		if (p != -1) r[i] = p - i;
		if (p == -1) r[i] = -1;
	}
	p = -1;
	for (int i=0;i<n;i++) {
		if (a[i] == 0) p = i;
		if (p != -1) l[i] = i - p;
		if (p == -1) l[i] = -1;
	}

	for (int i=0;i<n;i++) {
		if (l[i] == -1) {
			cout << r[i];
		} else if (r[i] == -1) {
			cout << l[i];
		} else {
			cout << min(l[i],r[i]);
		}
		cout << " ";
	}


	return 0;	
}

		