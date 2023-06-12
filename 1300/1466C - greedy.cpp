
// github.com/jamesgrimard/codeforces

#include <bits/stdc++.h> 

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


  int tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    int cnt = 0 , t = 0;
    for (int i=0;i<s.size()-1;i++) {
      if (s[i] == s[i+1]) {
        cnt++ , s[i+1] = '.';
      }
      if (i < s.size()-2 && s[i+2] == s[i]) {
        cnt++; 
        (t%2) ? s[i+2] = '1' : s[i+2] = '0';
        t++;
      }
    }
    cout << cnt << '\n';
  }



  return 0;   

}