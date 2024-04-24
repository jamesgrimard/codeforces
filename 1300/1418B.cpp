// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1418/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n] , A[n] , B[n];
    for (int i=0;i<n;i++) cin >> a[i];
    bool L[n] = {};
    vector<int> v;
    for (int i=0;i<n;i++) {
      cin >> L[i];
      if (!L[i]) v.push_back(a[i]);
    }
    // FIRST
    sort(v.begin(),v.end());
    int I=0;
    for (int i=0;i<n;i++) {
      if (!L[i]) {
        A[i] = v[I];
        I++;
      } else {
        A[i] = a[i];
      }
    }
    long long mn = 0 , sum = 0;
    for (int i=0;i<n;i++) {
      sum += (long long) A[i];
      if (sum < 0) mn = i + 1;
    }
    // SECOND
    sort(v.rbegin(),v.rend());
    I = 0 , sum = 0;
    for (int i=0;i<n;i++) {
      if (!L[i]) {
        B[i] = v[I];
        I++;
      } else {
        B[i] = a[i];
      }
    }
    long long mn2 = 0;
    for (int i=0;i<n;i++) {
      sum += (long long) B[i];
      if (sum < 0) mn2 = i + 1;      
    }
    
    if (mn2 <= mn) {
      for (auto &i : B) cout << i << " ";
    } else {
      for (auto &i : A) cout << i << " ";
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