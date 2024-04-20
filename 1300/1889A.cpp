// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1889/A/*  */
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin>> s;
		int a = 0,b=0;
		for (int i=0;i<n;i++) (s[i] == '0') ? a++ : b++;
		if (a != b) {
			cout << -1 << '\n';
		} else {
			int l = 0 , r = n-1;
			vector<int> v;
			while (l < r) {
				if (s[l] != s[r]) {
					l++ , r--;
					continue;
				}
				if (s[l] == '1') {
					v.push_back(l);
					s = s.substr(0,l) + "01" + s.substr(l);
					r+=2;
					continue;
				}
				if (s[l] == '0') {
					v.push_back(r+1);
					s = s.substr(0,r+1) + "01" + s.substr(r+1);
					r+=2;
				}
			}
			cout << v.size() << '\n';

			for (auto &i : v) cout << i << " ";
			cout << '\n';
		}
	}

}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();
 	
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*

*/
