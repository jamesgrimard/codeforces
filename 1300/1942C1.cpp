// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1942/C1
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int n,x,y; cin >> n >> x >> y;
		int a[x];
		for (int i=0;i<x;i++) cin >> a[i];
		sort(a,a+x);
		int cnt = x - 2 ;
		if (a[x-1] - a[0] == n-2) cnt++; 
		for (int i=1;i<x;i++) {
			if (a[i] - a[i-1] == 2) cnt++;
		}
		
		

		cout << cnt << '\n';
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
