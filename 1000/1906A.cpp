//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  
  string s[3]; for (int i=0;i<3;i++) cin >> s[i];

  string ans = "CCC";

  for (int i=0;i<3;i++) {
    for (int j=0;j<3;j++) {
      for (int k=0;k<3;k++) {
        for (int l=0;l<3;l++) {
          if (k == i && l == j) continue;
          for (int u=0;u<3;u++) {
            for (int p=0;p<3;p++) {
              if (u == i && p == j) continue;
              if (u == k && p == l) continue;

              if (abs(k-i) > 1 || abs(l-j) > 1) continue;
              if (abs(k-u) > 1 || abs(l-p) > 1) continue;
              string tmp = "";
              tmp.push_back(s[i][j]), tmp.push_back(s[k][l]) , tmp.push_back(s[u][p]);
              if (tmp < ans) ans = tmp;
            }
          }
        }
      }
    }
  }

  cout << ans << '\n';



}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
 	
  return 0;
}

