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
  while (tt--)  {
    string a, b; cin >> a >> b;
    while (a.size() < b.size()) a = "0" + a;
    int sum = 0;
    bool f = 0;
    for (int i=0;i<a.size();i++) {
      if (f == 1) {
        sum += 9;
      } else {
        sum += ((b[i]-'0')-(a[i]-'0'));
      }
      if (b[i] > a[i]) f = 1;
    }
    cout << sum << '\n';
  }


  
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}