// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1107/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  int n , k; cin >> n >> k;
  int a[n];
  for (int i=0;i<n;i++) cin >> a[i];
  string s; cin >> s;

  int r[n] = {};
  map<int,vector<int>> m;
  
  for (int i=0;i<n;i++) {
    if (i == 0) {
      r[i] = 1;
      m[r[i]].push_back(a[i]);
      continue;
    }
    (s[i] == s[i-1]) ? r[i] = r[i-1] : r[i] = r[i-1] + 1;
    m[r[i]].push_back(a[i]);
  }

  long long total = 0;

  for (auto &i : m) {
    int p = i.second.size();
    if (p > k) sort(i.second.begin(),i.second.end());
                  
    p = max(0,p-k);
    for (int j=p;j<i.second.size();j++) total += i.second[j];
  }

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