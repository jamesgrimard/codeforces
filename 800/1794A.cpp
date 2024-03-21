//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;



void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    string a[n] = {""}; for (int i=0;i<2*n-2;i++) {
      string tmp; cin >> tmp;
      a[tmp.size()] += tmp;
    }
    bool flag = 1;
    for (int i=1;i<n;i++) {
      int q = a[i].size();
      for (int j=0;j<q/2;j++) {
        if (a[i][j] != a[i][q-1-j]) flag = 0;
      }
    }
    (flag) ? cout << "YES\n" : cout << "NO\n";
  }
}




int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}

