// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1873/F
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;
            
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n,k; cin >> n >> k;
    int apples[n] , height[n];
    for (int i=0;i<n;i++) cin >> apples[i];
    for (int i=0;i<n;i++) cin >> height[i];

    int total = 0 , mx = 0;
    queue<int> q;
    for (int i=n-1;i>=0;i--) {
      // make room
      while (!q.empty() && ((total + apples[i] > k) || (i != n-1 && height[i] % height[i+1] != 0))) {
        total -= q.front();
        q.pop();
      }
      // add
      if (total + apples[i] <= k && (q.empty() || (i != n-1 && height[i] % height[i+1] == 0))) {
        q.push(apples[i]);
        total += apples[i];
      } 
      mx = max((int)q.size(),mx);
    }
    cout << mx << '\n';
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