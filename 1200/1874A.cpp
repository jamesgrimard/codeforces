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
    long long n , m ,k; cin >> n >> m >> k;
    int a[n] , b[m];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<m;i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    if (a[0] < b[m-1]) swap(a[0],b[m-1]); // move 1
    if (b[m-1] < b[0]) swap(b[m-1],b[0]);
    if (a[0] > a[n-1]) swap(a[n-1],a[0]);
    // now b has the smallest number and a has largest
    long long cnt = 0;
    for (int i=0;i<n;i++) cnt += (long long)a[i];

    if (k&1) {
      cout << cnt << '\n';
    } else {
      cout << cnt - (long long)a[n-1] + (long long)b[0] << '\n';
    }
  }




    



}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
