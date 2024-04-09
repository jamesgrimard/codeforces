//github.com/jamesgrimard/codeforces
  
#include <bits/stdc++.h>
       
using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n][n];
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++) cin >> a[i][j];
    }

    vector<int> r(n,1073741823);

    bool ans = 1;

    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++) {
        if (j == i) continue;
        if (a[i][j] != a[j][i]) ans = 0;
        r[i] &= a[i][j]; 
      }
    }
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++) {
        if (i == j) continue;
        if ((r[i]|r[j]) != a[i][j]) ans = 0;
      }
    }

    (ans) ? cout << "YES\n" : cout << "NO\n";
    if (ans) {
      for (auto x:r) cout << x << " ";
      cout << '\n';
    }
  }   


     
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
