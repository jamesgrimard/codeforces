//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int  n; cin >> n;
  string s; cin >> s;
  int sum = n;
  for (int i=0;i<n-1;i++) {
    for (int j=i+1;j<n;j++) {
      if (s[i] == s[j]) {
        sum += (j-i-1);
        break;
      }
      if (j == n-1) sum += (j-i);
    }
  }
  cout << sum << '\n';
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  int tt; cin >> tt; 
  while (tt--) solve();
 	
  return 0;
}

