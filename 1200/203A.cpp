// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// ----------------------------------------------------------------------------
// PROBLEM
// ----------------------------------------------------------------------------
/*

*/
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int x , t , a , b , ca , cb; cin >> x >> t >> a >> b >> ca >> cb;

  int A[t] = {} , B[t] = {};
  unordered_map<int,bool> ma,mb;
  ma[0] = 1 , mb[0] = 1;

  for (int i=0;i<t;i++) {
    A[i] = a - i * ca;
    B[i] = b - i * cb;
    mb[B[i]] = 1;
    ma[A[i]] = 1;
  }

  bool ans = 0;

  for (int i=0;i<t;i++) {
    if (A[i] <= x && mb[x-A[i]]) ans = 1;
    if (B[i] <= x && ma[x-B[i]]) ans = 1;
  }

  (ans || !x) ? cout << "YES\n" : cout << "NO\n";

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
