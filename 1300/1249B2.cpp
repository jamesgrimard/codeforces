// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1249/B2
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

int p[200001] , cnt;

void dfs(int i, int &I , int ref[]) {
  if (ref[i]) return;
  cnt++;
  ref[i] = I;
  return dfs(p[i],I,ref);
}

void solve() {    
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    for (int i=1;i<=n;i++) cin >> p[i];
    vector<int> counts;
    int ref[n+1] = {}, I = 0;
    for (int i=1;i<=n;i++) {
      cnt = 0;
      if (!ref[i]) {
        I++;
        dfs(i,I,ref);
        counts.push_back(cnt);
      }
    }
    for (int i=1;i<=n;i++) cout << counts[ref[i]-1] << " ";
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