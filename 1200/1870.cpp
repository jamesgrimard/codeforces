//github.com/jamesgrimard/codeforces
  
#include <bits/stdc++.h>
       
using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;

long long _gcd(long long a, long long b) {
  if ( a % b == 0) return b;
  return _gcd(b,a%b);
}


void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n,m; cin >> n >> m;
    int a[n] , b[m];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<m;i++) cin >> b[i];

    long long mx = a[0];
    for (int i=1;i<n;i++) mx ^= a[i];

    long long carry = 0;
    for (int i=0;i<m;i++) carry |= b[i];                                                    
    for (int i=0;i<n;i++) a[i] |= carry;

    long long mn = a[0];
    for (int i=1;i<n;i++) mn ^= a[i];

    (n&1) ? cout << mx << " " << mn << '\n' : cout << mn << " " << mx << '\n';
  }






    



}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
