// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long h,w; cin >> h >> w;
		long long l = 0 , r = 0;
		long long mx = 0;

		int c10; cin >> c10;
		for (int i=0;i<c10;i++){
			int x; cin >> x;
			if (i == 0) l = x;
			if (i == c10-1) r = x;
		}
		mx = max((r-l)*w,mx);

		int c12; cin >> c12;
		for (int i=0;i<c12;i++){
			int x; cin >> x;
			if (i == 0) l = x;
			if (i == c12-1) r = x;
		}
		mx = max((r-l)*w,mx);

		int c20; cin >> c20;
		for (int i=0;i<c20;i++){
			int x; cin >> x;
			if (i==0) l = x;
			if (i==c20-1) r= x;
		}
		mx = max((r-l)*h,mx);

		int c21; cin >> c21;
		for (int i=0;i<c21;i++){
			int x; cin >> x;
			if (i == 0) l = x;
			if (i == c21-1) r = x;
		}
		mx = max((r-l)*h,mx);

		cout << mx << '\n';
	}

	return 0;
}
