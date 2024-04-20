// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1881/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

vector<int> primes = {2};
void primer() {
	for (int i=3;i<=1000;i+=2) {
		bool f=1;
		for (auto &x : primes) {
			if (x * x > i ) break;
			if (i % x == 0) f = 0;
		}
		if (f) primes.push_back(i);
	}
}

void solve() {

	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		map<int,int> m;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			for (auto &j : primes) {
				if (j * j > x) break;
				while (x % j == 0) {
					x /= j;
					m[j]++;
				}
			}
			m[x]++;
		}

		bool ans = 1;
		for (auto &i : m) {
			if (i.first == 1) continue;
			if (i.second % n) ans = 0;
		}
		(ans) ? cout << "YES\n" : cout << "NO\n";
	}


}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	primer();

  solve();
 	
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*

*/
