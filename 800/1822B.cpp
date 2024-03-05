//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  int tt; cin >> tt;
  while (tt--) {
    int n;  cin >> n;
    long long mn1 = 1e9, mn2 = 1e9 , mx1 = -1e9 , mx2 = -1e9;
    for (int i=0;i<n;i++) {
      int tmp; cin >> tmp;
      if (tmp <= mn1) {
        mn2 = mn1;
        mn1 = tmp;
      } else if (tmp < mn2) {
        mn2 = tmp;
      }
      if (tmp >= mx1) {
        mx2 = mx1;
        mx1 = tmp;
      } else if (tmp > mx2) {
        mx2 = tmp;
      }
    }
    cout << max(mn1*mn2 , mx1 * mx2) << '\n';
  }
  
  
  
  
	

  return 0;
}
