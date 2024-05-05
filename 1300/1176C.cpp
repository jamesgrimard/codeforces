// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1176/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  int n; cin >> n;
  int a[n];
  for (int i=0;i<n;i++) cin >> a[i];
  
  int r[6] = {4,8,15,16,23,42};
  int cnt[6] = {};
  int total = 0;

  for (int i=0;i<n;i++) {
    if (a[i] == 4) {
      cnt[0]++;
      continue;
    }
    if (a[i] == 8) {
      if (cnt[0] <= cnt[1]) {
        total++;
      } else {
        cnt[1]++;
      }
    }
    if (a[i] == 15) {
      if (cnt[1] <= cnt[2]) {
        total++;
      } else {
        cnt[2]++;
      }
    }
    if (a[i] == 16) {
      if (cnt[2] <= cnt[3]) {
        total++;
      } else {
        cnt[3]++;
      }
    }
    if (a[i] == 23) {
      if (cnt[3] <= cnt[4]) {
        total++;
      } else {
        cnt[4]++;
      }
    }
    if (a[i] == 42) {
      if (cnt[4] <= cnt[5]) {
        total++;
      } else {
        cnt[5]++;
      }
    }
  }
        
    for (int i=4;i>=0;i--) total += (cnt[i]-cnt[5]);


    cout << total << '\n';


                    

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