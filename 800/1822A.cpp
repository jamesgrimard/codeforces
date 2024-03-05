//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  int tt; cin >> tt;
  while (tt--) {
    int n , t; cin >> n >> t;
    int a[n] , b[n]; for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++) cin >> b[i];
    int mx = 0 , index = -1;
    for (int i=0;i<n;i++) {
      if (a[i] <= (t - i) && b[i] >= mx) {
        mx = b[i];
        index = i + 1;
      }
    }
    cout << index << '\n';
  } 
  

  return 0;
}
