// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1234/B2
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {    

  int n , k; cin >> n >> k;

  deque<int> d;
  map<int,int> m;
     
  for (int i=0;i<n;i++) {
    int x; cin >> x;
    if (m[x] == 1) continue;
    if (d.size() == k) {
      int p = d.back();
      m[p] = 0;
      d.pop_back();
    }
    d.push_front(x);
    m[x] = 1;
  }
     
  cout << d.size() << '\n';
  for (auto &i : d) cout << i << " ";
  cout << '\n';

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