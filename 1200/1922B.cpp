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
    long long a[n+1] = {}, r[n+1] = {};

    for (int i=0;i<n;i++) {
      int x; cin >> x;
      a[x]++;
    }
                 

    for (int i=0;i<=n;i++) {
      if (i > 0) r[i] = r[i-1];
      r[i] += a[i];
    }
    
                               
    long long cnt = 0;
                 
    for (int i=0;i<=n;i++) {
      if (i > 0 && a[i] >= 2) cnt += r[i-1] * ((a[i]*(a[i]-1))/2);
      if (a[i] >= 3) cnt += a[i]*(a[i]-1)*(a[i]-2)/6;
    }
    
    cout << cnt << '\n';
  }
    

     
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
