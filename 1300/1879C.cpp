// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1879/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

long long FAC[200001];

void solve() {
  
  long long tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    long long cnt = 0 , cnt01 = 0 , cnt10 = 0;
    long long n = s.size();
    vector<long long> a(n,1);
    bool f= 0 , F = 0;
    for (long long i=0;i<n;i++) {
      cnt++;
      if (i == n-1 || s[i+1] != s[i]) {
        a[i] = cnt;
        cnt = 0;
      }


      if (s[i] == '1') {
        if (f) cnt10++;
        f = 1;
        if (!F) cnt01++;
        F = 0;
      }
      if (s[i] == '0') {
        if (!f) cnt10++;
        f=0;
        if (F) cnt01++;
        F = 1;
      }
    }

    long long k = FAC[min(cnt01,cnt10)];

    for (long long i=0;i<n;i++) k = (k * a[i]) % 998244353;

    cout << min(cnt01,cnt10) << " " << k << '\n';
  }




}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  FAC[0] = 1;
  for (long long i=1;i<=200000;i++) FAC[i] = (FAC[i-1] * i) % 998244353;

  solve();
 	
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*

*/
