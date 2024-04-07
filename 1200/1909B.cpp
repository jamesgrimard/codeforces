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
    long long a[n];
    for (int i=0;i<n;i++) cin >> a[i];
            
    long long p = 1;

    bool flag = 1;

    while (flag) {
      p <<= 1;
      long long q = a[0] % p;
      for (int i=1;i<n;i++) {
        if (a[i] % p != q) {
          flag = 0;
          break;
        }
      }
    }
    cout << p << '\n';
  }


     
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
