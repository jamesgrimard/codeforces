// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		if (n%2) {
			cout << -1 << '\n';
		} else {
			int cnt = 0;
			for (int i=0;i<n;i+=2) {
				(a[i] == a[i+1]) ? cnt++ : cnt += 2;
			}
			cout << cnt << '\n';
			for (int i=0;i<n;i+=2) {
				if (a[i] == a[i+1]) {
					cout << i + 1 << " " << i + 2 << '\n';
				} else {
					cout << i + 1 << " " << i + 1 << '\n';
					cout << i + 2 << " " << i + 2 << '\n';
				}
			}
		}
	}


	return 0;	
}

		