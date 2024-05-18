// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1909/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    pair<int,int> a[n+n];
    int c[n];

    for (int i=0;i<n+n;i++) {
      cin >> a[i].first;
      (i<n) ? a[i].second = 0 : a[i].second = 1;
    }
    
    for (int i=0;i<n;i++) cin >> c[i];

    sort(a,a+n+n);
    sort(c,c+n);

    stack<int> s;
    vector<int> o;

    for (int i=0;i<n+n;i++) {
      if (!a[i].second) {
        s.push(a[i].first);
      } else {
        o.push_back(a[i].first-s.top());
        s.pop();
      }
    }

    sort(o.rbegin(),o.rend());

    long long total = 0;

    for (int i=0;i<n;i++) total += (long long) o[i] * (long long) c[i];

    cout << total << '\n';

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