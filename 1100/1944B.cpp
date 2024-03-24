//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
long long mod(long long a, long long b) { return (a % b + b) % b; }

void solve() {

  int n , k; cin >> n>> k;
  int a[n+1] = {} , b[n+1] = {}; 
  for (int i=0;i<n;i++) {
    int x; cin >> x; 
    a[x]++;
  }
  for (int i=0;i<n;i++) {
    int x; cin >> x;
    b[x]++;
  }
  vector<int> V;
  int cnt = 0 , cnt2 = 0;
  for (int i=1;i<=n;i++) {
    if (cnt == 2*k) break;
    if (a[i] == 2) {
      cout << i << " " << i << " ";
      cnt+=2;
    }
  }
  for (int i=1;i<=n;i++) {
    if (cnt == 2*k) break;
    if (a[i] == 1) {
      cout << i << " ";
      cnt++;
      V.push_back(i);
    }
  }
  cout << '\n';
  for (auto x:V) cout << x << " ";
  for (int i=1;i<=n;i++) {
    if (cnt2 == 2*k) break;
    if (b[i] == 2) {
      cout << i << " " << i << " ";
      cnt2+=2;
    }
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  int tt; cin >> tt; 
  while (tt--) solve();
 	
  return 0;
}

