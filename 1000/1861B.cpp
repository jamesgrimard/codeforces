//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    string a , b; cin >> a >> b;
    int n = a.size();
    int l = 0 , r = n-1 , first = n-1 , last = 0;
    bool f = 0;
    for (int i=1;i<n;i++) {
      if (a[i] == '1' && b[i] == '1' && f == 0) break;
      if (a[i] != b[i]) f = 1;
      if (a[i] == '0' && b[i] == '0') f = 0;
    }
    (f) ? cout << "NO\n" : cout << "YES\n";
  }
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
 	
  return 0;
}

