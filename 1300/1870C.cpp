// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1870/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n,k; cin >> n >> k;
    pair<int,int> a[n];
    for (int i=0;i<n;i++) {
      cin >> a[i].first;
      a[i].second = i;
    }
    sort(a,a+n,[](const pair<int,int> &a , const pair<int,int> &b){return a.first < b.first;});
    int mn[n] = {} , mx[n] = {};
    mn[n-1] = a[n-1].second , mx[n-1] = a[n-1].second;
    for (int i=n-2;i>=0;i--) {
      mn[i] = mn[i+1] , mx[i] = mx[i+1];
      mn[i] = min(a[i].second,mn[i]);
      mx[i] = max(a[i].second,mx[i]);
    }

    int I = 1;
    for (int i=0;i<n;i++) {
      if (i && a[i].first == a[i-1].first) continue;
      while (I < a[i].first) {
        cout << 0 << " ";
        I++;
      }
      cout << (mx[i]-mn[i]+1)*2 << " ";
      I++;
    }
    while (I <= k) {
      cout << 0 << " ";
      I++;
    }
    cout << '\n';

  }

}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
 	
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*

*/
