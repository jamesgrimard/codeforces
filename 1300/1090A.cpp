// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1090/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  int n; cin >> n;
  int mainmx = 0;
  pair<int,int> M[n];
  for (int i=0;i<n;i++) {
    cin >> M[i].second;
    int mx = 0;
    for (int j=0;j<M[i].second;j++) {
      int x; cin >> x;
      mx = max(x,mx);
    }
    M[i].first = mx;
    mainmx = max(M[i].first,mainmx);
  }
  long long k = 0;
  for (int i=0;i<n;i++) k += (long long) (mainmx - M[i].first) * (long long) M[i].second;
  cout << k << '\n';

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