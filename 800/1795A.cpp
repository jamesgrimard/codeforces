//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >> n >> k;
    string s,d; cin >> s >> d;
    bool f1 = 0 , ans = 1 , f2 = 0;
    for (int i=n-2;i>=0;i--) {
      if (s[i] == s[i+1]) {
        if (f1 || d[k-1] == s[n-1]) {
          ans = 0;
        } else { 
          f1 = 1;
        }
      }
    }
    for (int i=k-2;i>=0;i--) {
      if (d[i] == d[i+1]) {
        if (f1 || f2 || d[k-1] == s[n-1]) {
          ans = 0;
        } else { 
          f2 = 1;
        }
      }
    }
    
    (ans) ? cout << "YES\n" : cout << "NO\n";
  }
    
  return 0;
}

