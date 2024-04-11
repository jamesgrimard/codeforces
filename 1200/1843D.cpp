// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// ----------------------------------------------------------------------------
// PROBLEM
// ----------------------------------------------------------------------------
/*

*/
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &a, vector<bool> &b , int i, vector<int> &s , int cnt[]) {
  if (b[i]) return; b[i] = 1;
  s.push_back(i);
  if (a[i].size() == 1 && i != 1) {
    for (auto &x:s) cnt[x]++;
  }
  for (int j=0;j<a[i].size();j++) dfs(a,b,a[i][j],s,cnt); 
  s.pop_back();
}

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    
    vector<vector<int>> a(n+1);
    vector<bool> b(n+1,0);
    vector<int> s;
    int cnt[n+1] = {};

    for (int i=0;i<n-1;i++) {
      int u,v; cin >> u >> v;
      a[u].push_back(v);
      a[v].push_back(u);
    }
    int sum = 0;
    dfs(a,b,1,s,cnt);

    int q; cin >> q;
    for (int i=0;i<q;i++) {
      int x,y; cin >> x>> y;
      cout << (long long) cnt[x] * cnt[y] << '\n';
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
