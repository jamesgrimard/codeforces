//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  int tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    int cnt = 0;
    
    if (s[0] == '_') cnt++;
    if (s[s.size()-1] == '_' || s.size() == 1) cnt++;
    
    for (int i=0;i<s.size()-1;i++) {
      if (s[i] == '_' && s[i+1] == '_') cnt++;
    }
    
    cout << cnt << '\n';
  }  
  

  return 0;
}

