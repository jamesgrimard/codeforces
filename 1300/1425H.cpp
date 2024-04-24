// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1425/H
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int a[4]; 
    for (int i=0;i<4;i++) cin >> a[i];

    ((a[0]+a[1]) % 2 && (a[0] || a[3])) ? cout << "Ya " : cout << "Tidak ";


    ((a[0]+a[1]) % 2 && (a[1] || a[2])) ? cout << "Ya " : cout << "Tidak ";

                                      
    ((a[0]+a[1]) % 2 == 0 && (a[1] || a[2])) ? cout << "Ya " : cout << "Tidak ";
                                            

    ((a[0]+a[1]) % 2 == 0 && (a[0] || a[3])) ? cout << "Ya " : cout << "Tidak ";

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