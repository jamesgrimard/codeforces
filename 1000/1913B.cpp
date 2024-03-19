//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    string a; cin >> a;
    int n = a.size();
    int cnt1 = 0 , cnt0 = 0;
    for (int i=0;i<n;i++) {
      if (a[i] == '0') {
        cnt0++;
      } else {
        cnt1++;
      }
    }
    if (cnt0 == 0 || cnt1 == 0) {
      cout << n << '\n';
      continue;
    }
    int cnt = 0 , ans = 0;
    for (int i=0;i<n;i++) {
      if (cnt1 > cnt0) {
        if (a[i] == '1') cnt++;
        if (cnt > cnt0) {
          ans = n - i;
          break;
        }
      }
      if (cnt0 > cnt1) {
        if (a[i] == '0') cnt++;
        if (cnt > cnt1) {
          ans = n - i;
          break;
        }
      }
    }
    cout << ans << '\n';
  }
  
  
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	
  return 0;
}
