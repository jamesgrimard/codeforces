// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1271/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {

  int n; cin >> n;
  string s; cin >> s;
  int a = 0 , b = 0;
  for (int i=0;i<n;i++) (s[i] == 'B') ? b++ : a++;
  if (a == 0 || b == 0) {
    cout << 0 << '\n';
  } else if (a % 2 && b % 2) {
    cout << -1 << '\n';
  } else {
    vector<int> v;
    if (b % 2 == 0) {
      for (int i=0;i<n-1;i++) {
        if (s[i] == 'B') {
          v.push_back(i);
          s[i] = 'W';
          (s[i+1] == 'B') ? s[i+1] = 'W' : s[i+1] = 'B';
        }
      }
    } else {
      for (int i=0;i<n-1;i++) {
        if (s[i] == 'W') {
          v.push_back(i);
          s[i] = 'B';
          (s[i+1] == 'W') ? s[i+1] = 'B' : s[i+1] = 'W';
        }
      }
    }
    cout << v.size() << '\n';
    for (auto &i : v) cout << i + 1 << " ";
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