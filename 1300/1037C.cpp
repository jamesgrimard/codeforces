// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1037/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  int n; cin >> n;
  string a, b; cin >> a >> b;

  int cost = 0;

  for (int i=0;i<n-1;i++) {
    if (a[i] != b[i] && a[i+1] != b[i+1] && a[i] == b[i+1] && a[i+1] == b[i]) {swap(a[i],a[i+1]), cost++;}
  }

  for (int i=0;i<n;i++) {
    if (a[i] != b[i]) cost++;
  }

  cout << cost << '\n';


                                                                    
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