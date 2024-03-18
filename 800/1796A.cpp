//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    string s; cin >> s;
    string r = "FBFFBFFBFBFFBFFBFBFF";
    bool flag = 0;
    for (int i=0;i<=20-n;i++) if (r.substr(i,n) == s) flag = 1;
    (flag) ? cout << "YES\n" : cout << "NO\n";
  }   
    
  return 0;
}

