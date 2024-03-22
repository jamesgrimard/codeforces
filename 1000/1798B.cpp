//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

 int tt; cin >> tt;
 while (tt--) {
  int m; cin >> m;
  vector<vector<int>> a(m);
  int r[50001] = {};
  for (int i=0;i<m;i++) {
    int n; cin >> n;
    vector<int> p(n);
    for (int j=0;j<n;j++) {
      cin >> p[j];
      r[p[j]] = i + 1;
    }
    a[i] = p;
  }
  int o[m+1] = {};
  for (int i=1;i<=50000;i++) {
    if (r[i] > 0) o[r[i]] = i;
  }
  bool ans = 1;
  for (int i=1;i<=m;i++) if (o[i] == 0) ans = 0;
  if (ans == 0) {
    cout << -1 << '\n';
  } else {
    for (int i=1;i<=m;i++) cout << o[i] << " ";
    cout << '\n';
  }
 }
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

