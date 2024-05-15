// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1919/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    
    vector<int> a = {n+1} , b = {n+1};
    int cnt = 0;

    for (int i=0;i<n;i++) {
      int x , A = a.back() , B = b.back(); cin >> x;
      if (x <= A && x > B) {
        a.push_back(x);
      } else if (x > A && x <= B) {
        b.push_back(x);
      } else if (x <= A && x <= B) {
        if (A <= B) {
          a.push_back(x);
        } else {
          b.push_back(x);
        }
      } else if (x > A && x > B) {
        if (B >= A) {
          a.push_back(x);
        } else {
          b.push_back(x);
        }
        cnt++;
      }
    }

    cout << cnt << '\n';
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