//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		long long n , P , l , t; cin >> n >> P >> l >> t;
		
		long long tasks = (n-1)/7 + 1;
		long long T = tasks / 2;
		long long TT = tasks & 1;
		long long cost = 0;
		long long Q = P/(l+2*t);
		if (P % (l+2*t) != 0) Q++;
		
		cost += min(Q , T);
		P -= min(Q , T) * (l+2*t);
		if (P > 0) {
			if (TT) cost++;
			P -= TT * (l+t);
			if (P > 0) {
				cost += (P / l);
				if (P % l != 0) cost++;
			}
		}
		(cost > n) ? cout << 0 << '\n' : cout << n - cost << '\n';
	}

  
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
