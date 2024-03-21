//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  int tt; cin >> tt;
  while (tt--) {
    int n,m; cin >> n >> m;
    int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
    int cnt1 = 0 , cnt2 = 0;
    if (y1 != 1) cnt1++;
    if (y1 != m) cnt1++;
    if (x1 != 1) cnt1++;
    if (x1 != n) cnt1++;
    if (y2 != 1) cnt2++;
    if (y2 != m) cnt2++;
    if (x2 != 1) cnt2++;
    if (x2 != n) cnt2++;
    cout << min(cnt1,cnt2) << '\n';
  }
  
  return 0;
}

