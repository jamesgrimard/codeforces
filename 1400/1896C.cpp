// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1896/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  

void solve() {        
  
  int tt; cin >> tt;
  while (tt--) {
    int n, x; cin >> n >> x;
    
    pair<int,int> A[n] , B[n];
    int r[n] , b[n];
    
    for (int i=0;i<n;i++) {
      cin >> A[i].first;
      A[i].second = i;
    }

    for (int i=0;i<n;i++) {
      cin >> B[i].first;
      B[i].second = i;
      b[i] = B[i].first;
    }

    sort(A,A+n);
    sort(B,B+n);

    bool ans = 1;

    for (int i=0;i<n-x;i++) {
      if (A[i].first > B[i+x].first) ans = 0;
      r[A[i].second] = B[i+x].second;
    }

    for (int i=x-1;i>=0;i--) {
      if (A[n - 1 - (x - 1 - i)].first <= B[i].first) ans = 0;
      r[A[n - 1 - (x - 1 - i)].second] = B[i].second;
    }

    if (ans) {
      cout << "YES\n";
      for (int i=0;i<n;i++) {
        cout << b[r[i]] << " ";
      }
      cout << '\n';
    } else {
      cout << "NO\n";
    }

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