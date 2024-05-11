// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1037/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  int n , k; cin >> n >> k;
  int a[n]; 
  for (int i=0;i<n;i++) cin >> a[i];
  sort(a,a+n);
  long long cnt = 0;
  if (a[n/2] > k) {
    for (int i=n/2;i>=0;i--) cnt += max(a[i]-k,0);
  } else if (a[n/2] < k) {
    for (int i=n/2;i<n;i++) cnt += max(k-a[i],0);
  }
  cout << cnt << '\n';
                                                                    
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