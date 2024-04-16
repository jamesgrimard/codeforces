// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1931/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;


void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n , x, y; cin >> n >> x >> y;

    map<pair<int,int>,int> m;
    long long cnt = 0;
    for (int i=0;i<n;i++) {
      int a; cin >> a;
      int l = (x-a%x)%x , r = a%y;
      cnt += m[{l,r}];
      int L = a%x , R = a%y;
      m[{L,R}]++;
      
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
