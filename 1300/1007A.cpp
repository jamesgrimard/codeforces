// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1007/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
  
void solve() {
  
  int n; cin >> n;
  int a[n];
  for (int i=0;i<n;i++) cin >> a[i];
  sort(a,a+n);
  queue<int> q;
  int cnt = 0;
  for (int i=n-1;i>=0;i--) {
    if (i == n-1) {
      q.push(a[i]);
      continue;
    }
    if (q.front() > a[i]) {
      cnt++;
      q.pop();
    }
    q.push(a[i]);
  }

  cout << cnt << '\n';

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