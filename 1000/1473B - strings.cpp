// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;  cin >> tt;
	while (tt--) {
		string a , b; cin >> a >> b;
		if (size(a) > size(b)) swap(a,b);
		int x = size(a), y = size(b);
		int k = 0;
		for (int i=1;i<=x;i++) {
			if (y*i % x == 0) {
				k = i-1;
				break;
			}
		}
		for (int i=0;i<k;i++) b += b.substr(0,y);
		while (size(a) < size(b)) a += a.substr(0,x);
		bool ans = 1;
		for (int i=0;i<size(a);i++) {
			if (a[i] != b[i]) {
				ans = 0; break;
			}
		}
		(ans == 1) ? cout << a : cout << -1;
		cout << '\n';
	}



	return 0;
}
