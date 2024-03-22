// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

const long long MOD = 1e9 + 7;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    for (int i=0;i<s.size();i++) {
      if (s[i] == '?') {
        (i == 0) ? s[i] = '0' : s[i]=s[i-1];
      } 
    }
    cout << s << '\n';
  }


  
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}