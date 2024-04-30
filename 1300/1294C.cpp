// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1294/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

vector<int> prime = {2};
void primes(int stop) {
  for (int i=3;i<=stop;i+=2) {
    bool f = 0;
    for (auto &j : prime) if (i % j == 0) {
      f = 1;
      break;
    }
    if (!f) prime.push_back(i);
  }
}




void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    vector<int> v;
    for (auto &i : prime) { 
      while (n % i == 0) {
        n /= i;
        v.push_back(i);
      }
    }
    v.push_back(n);
    vector<int> ans(3,1);
    int I = 0;
    for (int i=0;i<v.size();i++) {
      ans[I] *= v[i];
      if (I == 0 || (I == 1 && ans[1] > 1 && ans[1] != ans[0])) I++;
    }

    
    if (ans[0] == 1 || ans[1] == 1 || ans[2] == 1 || ans[1] == ans[0] || ans[2] == ans[1] || ans[2] == ans[0]) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
      for (auto &i : ans) cout << i << " ";
      cout << '\n';
    }
    
    /*for (auto &i : v) cout << i << " ";
    cout << '\n';

    for (auto &i : ans) cout << i << " ";
    cout << '\n';*/
  }

}
  
int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
 
  primes(100000);


  solve();
  
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*
 
*/