//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n]; for (int i=0;i<n;i++) cin >> a[i];
    int smallest = a[0], mx , p = a[0];
    cout << 1;
    bool f= 0;
    for (int i=1;i<n;i++) {
      if (f == 0) {
        if (a[i] >= p) {
          cout << 1;
          p = a[i];
        } else if (a[i] < p && a[i] > smallest) {
          cout << 0;
        } else {
          mx = smallest; 
          smallest = a[i];
          p = a[i];
          f = 1;
          cout << 1;
        }
      } else {
        if (a[i] >= p && a[i] <= mx) {
          p = a[i];
          cout << 1;
        } else {
          cout << 0;
        }
      }
      
    }
    cout << '\n';
  }
  
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

