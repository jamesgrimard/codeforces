//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int a , b, c; cin >> a >> b >> c;

  int A = 0 , B = 0, k = c , cnt = 0;
  while (k % a == 0) {
    A++;
    k /= a;
  }
  k = c;
  while (k % b == 0) {
    B++;
    k /= b;
  }
  unordered_map<int,int> m;
  for (int i=0;i<=A;i++) {
    for (int j=0;j<=B;j++) {
      int q = pow(a,i)*pow(b,j);
      if (c % q == 0 && m[c/q] == 0) {
        cnt++;
        m[c/q]++;
      }
    }
  }
  cout << cnt << '\n';
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  int tt; cin >> tt; 
  while (tt--) solve();
 	
  return 0;
}

