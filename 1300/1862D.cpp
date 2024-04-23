// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1862/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;
            
void solve() {

  int tt; cin >> tt;
  while (tt--) {
    long long N; cin >> N;

    long long n = N * 4LL * 2LL + 1LL;
    n = sqrt((long double) n);
    n++;
    n/=2LL;

    cout << N - n * (n-1LL) / 2LL + n << '\n';
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