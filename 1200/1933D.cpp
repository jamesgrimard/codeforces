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
    int a[n]; for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
       
    int mn = a[1];
    bool ans = 0;

    for (int i=0;i<n;i++) {
      if (a[i] % mn < mn && a[i] % mn != 0) ans = 1;
    }


    (ans) ? cout << "YES\n" : cout << "NO\n";



  }

     
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
