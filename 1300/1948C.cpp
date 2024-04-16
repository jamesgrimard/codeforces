// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: codeforces.com/problemset/problem/1948/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

int n;
string a , b;
bool ans;

void dp(bool top , int i , int slide, bool visited[]) {
  if (i == n - 1 || ans) {
    ans = 1;
    return;
  }

  if (slide) return dp(top,i+1,0,visited);

  if (visited[i]) return;
  visited[i] = 1;
  
  if (top && a[i+1] == '>') dp(1,i+1,1,visited);
  if (!top && b[i+1] == '>') dp(0,i+1,1,visited);
  if (top && b[i] == '>') dp(0,i,1,visited);
  if (!top && a[i] == '>') dp(1,i,1,visited);
}

void solve() {

  int tt; cin >> tt;
  while (tt--) {

    cin >> n >> a >> b;
    ans = 0;
    bool visited[n] = {};
    dp(1,-1,1,visited);
    
    (ans) ? cout << "YES\n" : cout << "NO\n";
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
