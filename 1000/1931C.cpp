//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n]; for (int i=0;i<n;i++) cin >> a[i];
    int front = 1 , back = 1;
    for (int i=1;i<n;i++) {
      if (a[i] == a[i-1]) {
        front++;
      } else {
        break;
      }
    }
    for (int i=n-2;i>=0;i--) {
      if (a[i] == a[i+1]) {
        back++;
      } else {
        break;
      }
    }
    (a[0] == a[n-1]) ? cout << max(0,n - (front + back)) << '\n' : cout << n - max(front,back) << '\n';
  }
  
  
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	
  return 0;
}
