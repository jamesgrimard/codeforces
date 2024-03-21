//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >> n >> k;
    int mn = k - 1 , sum = 0;
    if (k == 4) mn = 2;
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (x % k == 0) mn = 0;
      mn = min(mn,k - x % k);
      if (x%2 == 0) sum++;
    }
    if (k == 4) mn = min(mn,max(2-sum,0));

    cout << mn << '\n';
  }  

  
  
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
 	
  return 0;
}
