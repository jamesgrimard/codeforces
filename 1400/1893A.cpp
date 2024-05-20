// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1893/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  

int tt , n , k , x;

bool _dfs(int cur , int a[] , bool ref[]) {
  if (ref[cur] || !k) return 1;
  ref[cur] = 1;
  if (a[cur] > n) return 0;
  x = cur - a[cur];
  if (x < 0) x = n + x;
  k--;
  return _dfs(x , a , ref);
}

void solve() {        
  
  cin >> tt;

  while (tt--) {

    cin >> n >> k;
    
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    bool ref[n] = {};
    
    (_dfs(n-1,a,ref)) ? cout << "Yes\n" : cout << "No\n";

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