// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		if (n == 1) {
			cout << 1 << '\n';
			continue;
		}
		if (n % 2) {
			cout << -1 << '\n';
			continue;
		}
		vector<int> a;
		for (int i=0;i<n/2;i++) {
			a.push_back(i) , a.push_back(n-1-i);
		}
		for (int i=0;i<n;i++) {
			if (i == 0) {
				cout << n << " ";
			} else {
				cout << (n + (a[i] - a[i-1])) % n << " ";
			}
		}
		cout << '\n';
	}

	return 0;	
}