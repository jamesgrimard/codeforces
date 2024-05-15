// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1914/E1
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n ; cin >> n;

    vector<pair<pair<int,int>,int>> A(n),B(n);  

    for (int i=0;i<n;i++) {
      cin >> A[i].first.first;
      A[i].first.second = A[i].first.first;
      B[i].first.first = A[i].first.first;
      A[i].second = i;
    }
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      B[i].first.first += x;
      B[i].first.second = x;
      A[i].first.first += x;
      B[i].second = i;
    }

    sort(A.rbegin(),A.rend());
    sort(B.rbegin(),B.rend());



    bool R[n] = {};
    long long total = 0;
    int top = 0 , bottom = 0;

    for (int i=1;i<=n;i++) {
      if (i & 1) {
        total += (long long) (A[top].first.second - 1);
        R[A[top].second] = 1;
      } else {
        total -= (long long) (B[bottom].first.second - 1);
        R[B[bottom].second] = 1;
      }

      while (R[A[top].second] && top < n-1) top++;
      while (R[B[bottom].second] && bottom < n-1) bottom++;
    }

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