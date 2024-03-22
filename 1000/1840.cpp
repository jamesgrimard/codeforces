//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    long long n , k , q; cin >> n >> k >> q;
    long long a[n] , cnt = 0 , sum = 0; 
    for (int i=0;i<n;i++) {
      cin >> a[i];
      if (a[i] <= q) {
        cnt++;
        if (i < n-1) continue;
      }
      long long p = cnt - k + 1;
      if (p > 0) sum += (p*p+p)/2;
      cnt = 0;
      
    }

    cout << sum << '\n';
  }
  
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

