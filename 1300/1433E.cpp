// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1433/E
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;

vector<long long> v(21,1);
                                                     
void solve() {


  long long n; cin >> n;

  cout << v[n] / v[n/2LL] / v[n/2LL] / 2LL * (v[n/2LL] / (n/2LL)) * (v[n/2LL] / (n/2LL)) << '\n';                                  



 
}
  
int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  for (long long i=2;i<=20;i++) v[i] = v[i-1] * i;
 
  solve();
  
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*
 
*/