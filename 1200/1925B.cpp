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
    int x,n; cin >> x >> n;
    int mx = 0;                        
    for (int i=1;i*i<=x;i++) {
      if (x % i == 0) {
        if (x / i >= n) mx = max(mx,i);
        if (i >= n) mx = max(mx,x/i);
      }
    }  
    cout << mx << '\n';
  }

                  

     
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
