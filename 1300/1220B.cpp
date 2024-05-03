// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1220/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
    
void solve() {    
                    
int n; cin >> n;
long long a[n][n];
for (int i=0;i<n;i++) {
  for (int j=0;j<n;j++) {
    cin >> a[i][j];
  }
}

long long k = a[0][n-2] * a[0][n-1] / a[n-2][n-1];
k = sqrt(k);
cout << k << " ";
for (int i=1;i<n;i++) cout << a[0][i] / k << " ";
cout << '\n';


                     
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