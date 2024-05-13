// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1970/C1
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;

int n , t , x , first , last;

struct node {
  int l = 0;
  int r = 0;
};

node a[200001];

int _searchleft(int current, int cnt) {
  if (current == x) return cnt;
  return _searchleft(a[current].r,cnt+1);
}

int _searchright(int current, int cnt) {
  if (current == x) return cnt;
  return _searchright(a[current].l,cnt+1);
}
 
void solve() {
  
  cin >> n >> t;

  for (int i=1;i<=n-1;i++) {
    int L,R; cin >> L >> R;
    a[L].r = R , a[R].l = L;
  }

  cin >> x;

  for (int i=1;i<=n;i++) {
    if (!a[i].l) first = i;
    if (!a[i].r) last = i;
  }

  int prefix = _searchleft(first,0);
  int suffix = _searchright(last,0);
  (prefix % 2 == 0 && suffix % 2 == 0) ? cout << "Hermione" : cout << "Ron";



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