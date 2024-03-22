//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

 int tt; cin >> tt;
 while (tt--) {
  int n; cin >> n;
  int a[n]; for (int i=0;i<n;i++) cin >> a[i];
  int r[n] = {};
  long long sum = 0;
  for (int i=0;i<n;i++) {
    if (a[i] != 0) continue;
    int mx = 0 , I = -1;
    for (int j=0;j<i;j++) {
      if (r[j] == 0 && a[j] > mx) {
        mx = a[j] , I = j;
      }
    }
    if (I != -1) r[I] = 1;
    sum += mx;
  }
  cout << sum << '\n';
 }
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

