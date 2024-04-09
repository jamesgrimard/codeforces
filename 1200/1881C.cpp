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
      string s; cin >> s;
      for (int j=0;j<n;j++) a[i][j] = (s[j]-0);
    }      
    int cnt = 0;
    for (int i=0;i<n/2;i++) {
      for (int j=i;j<n-1-i;j++) {
        int A = max(a[i][j],a[j][n-1-i]);
        int B = max(a[n-1-i][n-1-j],a[n-1-j][n-1-(n-1-i)]);
        int Q = max(A,B);
        cnt += (abs(Q-a[i][j])+abs(Q-a[j][n-1-i])+abs(Q-a[n-1-i][n-1-j])+abs(Q-a[n-1-j][n-1-(n-1-i)]));
      }
    }

    cout << cnt << '\n';
  }
     
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
