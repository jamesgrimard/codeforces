// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1364/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                                 
void solve() {

int tt; cin >> tt;
while (tt--) {
  int n; cin >> n;
  int a[n];
  for (int i=0;i<n;i++) cin >> a[i];
  vector<int> v;
  for (int i=0;i<n;i++) {
    if (i == 0 || i == n-1) {
      v.push_back(a[i]);
      continue;
    }
    if ((a[i] < a[i-1] && a[i] < a[i+1]) || (a[i] > a[i+1] && a[i] > a[i-1])) v.push_back(a[i]);
  }

  cout << v.size() << '\n';
  for (auto &i : v) cout << i << " ";
  cout << '\n';
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