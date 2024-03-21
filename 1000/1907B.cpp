//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    int n = s.size();
    int B = 0 , b = 0;
    string S = "";
    for (int i=n-1;i>=0;i--) {
      if (s[i] == 'B') {
        B++;
      } else if (s[i] == 'b') {
        b++;
      } else if (isupper(s[i])) {
        if (B > 0) {
          B--;
        } else {
          S.push_back(s[i]);
        }
      } else {
        if (b > 0) {
          b--;
        } else {
          S.push_back(s[i]);
        }
      }
    }
    for (int i=S.size()-1;i>=0;i--) cout << S[i];
    cout << '\n';
  }
  
  
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	
  return 0;
}
