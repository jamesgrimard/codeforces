//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >> n >> k;
    string a;
    int cnt = 1;
    for (int i=0;i<n;i++) {
      string s; cin >> s;
      if (i == 0) {
        a = s;
      } else if (s == a) {
        cnt++;
      }
    }
    cout << cnt << '\n';
  }

  return 0;
}

