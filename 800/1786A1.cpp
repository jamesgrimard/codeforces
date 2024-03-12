// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int l = 0 , r = 0;
		for (int i=0;i<n;i++) {  // move number
			int x = 4 * i + 1;     // current segment size
			if (x + l + r > n) {   // check for overflow
				x = n - (l+r);
			}
			if (i % 2 == 0) {
				l += x;
			} else {
				r += x;
			}
			if (l+r == n) break;
		}
		cout << l << " " << r << '\n';
	}			


                             
	return 0;
}