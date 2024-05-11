// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1029/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  
  int n , k; cin >> n >> k;
  string s; cin >> s;

  int p = 0;
  for (int i=1;i<n;i++) {
    p = 0;
    bool f= 0;
    for (int j=i;j<n;j++) {
      if (s[j] != s[p]) {
        f = 1;
        break;
      }
      p++;
    }
    if (!f) {
      p = n - i;
      break;
    }
  }

  //cout << p << '\n';

  string S = s.substr(p,n-p);
  
  //cout << S << '\n';
  

  k--;

  cout << s;
  for (int i=0;i<k;i++) cout << S;




                                                                    
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