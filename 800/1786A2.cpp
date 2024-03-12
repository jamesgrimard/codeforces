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
		int lw = 0 , rw = 0, lb = 0 , rb = 0 , cur = 0;
		for (int i=0;i<n;i++) {
			int x =	(4 * i + 1);
			if (lw + lb + rw + rb + x > n) {
				int p = n - (lb+lw+rw+rb);
				int k = p % 2;
				if (i%2) {
					rw += p/2;
					rb += p/2 +k;
				} else {
					lw += p/2 +k;
					lb += p/2;
				}
				break;
			}
			if (i % 2) {
    		rw += x/2;
				rb += (x/2 +1);
			} else {
				lw += (x/2 +1);
				lb += x/2;
			}
		}
		cout << lw << " " << lb << " " << rw << " " << rb << '\n';
	}
                             
	return 0;
}