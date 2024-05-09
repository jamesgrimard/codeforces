// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1070/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  
  long long n , k; cin >> n >> k;

  long long a[n];
  for (long long i=0;i<n;i++) cin >> a[i];

  long long bags = 0 , carry = 0 , cur = 0 , p;

  for (long long i=0;i<n;i++) {
    if (carry) {
      p = min(a[i],k-carry);
      carry += p;
      a[i] -= p;
      bags++;
      carry = 0;
    }
    cur = a[i];
    bags += cur / k;
    if (cur) carry = cur % k;
    cur = 0;
  }
  if (carry) bags++;

  cout << bags << '\n';
    



                                                                                          
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