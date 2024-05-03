// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1225/B2
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  

void solve() {    

  int tt; cin >> tt;
  while (tt--) {
    int n , k , d; cin >> n >> k >> d;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    int cnt = 0;
    map<int,int> m;

    for (int i=0;i<d;i++) {
      m[a[i]]++;
      if (m[a[i]] == 1) cnt++;
    }

    int mn = cnt;

    for (int i=d;i<n;i++) {
      m[a[i-d]]--;
      if (m[a[i-d]] == 0) cnt--;
      m[a[i]]++;
      if (m[a[i]] == 1) cnt++;
      mn = min(mn,cnt);
    }

    cout << mn << '\n';

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