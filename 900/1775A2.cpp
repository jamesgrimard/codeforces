// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

const long long C = 1e9 + 7;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    char first = s[0];
    if (first == 'a') {
      cout << s.substr(0,s.size()-2) << " " << s.substr(s.size()-2,1) << " " << s.substr(s.size()-1,1) << '\n';
    } else {
      cout << s.substr(0,1) << " " << s.substr(1,1) << " " << s.substr(2,s.size()-2) << '\n';
    }
  }
  



}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}