// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1424/G
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {
 
  int n; cin >> n;
  map<int,int> m;
  for (int i=0;i<n;i++) {
    int b,d; cin >> b >> d;
    m[b]++;
    m[d]--;
  }
  int mx = 0 , sum = 0 , yr;
  for (auto &i : m) {
    sum += i.second;
    if (sum > mx) {
      mx = sum;
      yr = i.first;
    }
  }
  cout << yr << " " << mx << '\n'; 
  
 
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