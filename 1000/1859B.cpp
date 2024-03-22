//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

 int tt; cin >> tt;
 while (tt--) {
  int n; cin >> n;
  int a[n] = {};
  int mn = 1e9;
  for (int i=0;i<n;i++) {
    int k; cin >> k;
    int L = 1e9 , L2 = 1e9 - 1;
    for (int j=0;j<k;j++) {
      int x; cin >> x;
      if (x <= L) {
        L2 = L;
        L = x;
      } else if (x <= L2) {
        L2 = x;
      }
      a[i] = L2;
    }
    mn = min(mn,L);
  }
  sort(a,a+n);
  long long sum = 0;
  for (int i=1;i<n;i++) sum += a[i];
  cout << sum + mn << '\n';
 }

}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
 	
  return 0;
}

