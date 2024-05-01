// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1249/C1
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

vector<int> v;
int a[20001] = {};

void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    
    cout << a[n] << '\n';   
  }

}
  
int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  for (int i=0;i<=10;i++) v.push_back((int)pow(3,i));

  for (int j=1;j<=20000;j++) {
    int J = j;
    for (int i=10;i>=0;i--) if (J >= v[i]) J -= v[i];
    if (!J) a[j] = 1;
  }
  for (int i=19999;i>=1;i--) {
    if (a[i]) {
      a[i] = i;
    } else {
      a[i] = a[i+1];
    }
  }


  solve();
  
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*
 
*/