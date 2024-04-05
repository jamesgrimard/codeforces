//github.com/jamesgrimard/codeforces
  
#include <bits/stdc++.h>
       
using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;
            
void solve() {                 
	
  int a[200001] = {};
  for (int i=1;i<=200000;i++) {
    a[i] = a[i-1];
    int p = i , cnt = 0;
    while (p) {
      cnt += p % 10;
      p/=10;
    }
    a[i] += cnt;
  }

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    cout << a[n] << '\n';
  }
        
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
