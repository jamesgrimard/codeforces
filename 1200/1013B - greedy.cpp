// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , x; cin >> n >> x;
	vector<int> a(100001),b(100001),r(n);
	int f = -1;
	for (int i=0;i<n;i++) {
		cin >> r[i];
		a[r[i]]++;
		if (a[r[i]] == 2) f = 0;
	}
	if (f == 0) {
		cout << 0;
	} else {
		for (int i=0;i<n;i++) {
			b[(r[i] & x)]++;
			if (b[(r[i]&x)] == 2) f = 2;
			if (a[(r[i]&x)] == 1 && (r[i]&x) != r[i]) {
				f = 1;
				break;
			}
		}
		cout << f;
	}

	return 0;	
}