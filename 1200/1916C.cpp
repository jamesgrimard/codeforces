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
    long long n; cin >> n;
    long long a[n] , s[n] = {}, r[n] = {};
    for (int i=0;i<n;i++) {
      cin >> a[i];
      if (i > 0) {
        r[i] = r[i-1];
        s[i] = s[i-1];
      }
      r[i] += (a[i] & 1);
      s[i] += a[i];
    }
    cout << a[0] << " ";
    for (int i=1;i<n;i++) {
      cout << s[i] - (r[i] / 3LL + (r[i] % 3LL & 1LL)) << " ";
    }
    cout << '\n';
  }

    
  


     
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
