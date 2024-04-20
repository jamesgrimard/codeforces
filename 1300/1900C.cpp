// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1900/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

int tt,n,mn;
string s;
pair<int,int> a[300001];

void dfs(int i, int cnt) {

  if (!a[i].first && !a[i].second) {
    mn = min(mn,cnt);
    return;
  }

  if (a[i].first) (s[i-1] == 'L') ? dfs(a[i].first,cnt) : dfs(a[i].first,cnt+1);
  if (a[i].second) (s[i-1] == 'R') ? dfs(a[i].second,cnt) : dfs(a[i].second,cnt+1);
}

void solve() {

 cin >> tt;
 while (tt--) {

  cin >> n;
  cin >> s;

  for (int i=1;i<=n;i++) cin >> a[i].first >> a[i].second;
  
  mn = 3e5;
  dfs(1,0);  

  cout << mn << '\n';

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
