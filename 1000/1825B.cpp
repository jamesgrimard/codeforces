// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

const long long MOD = 1e9 + 7;

long long thisfunc(long long d1 , long long d2,  int n, int m) {
    if (n >= m) {
      return ((n-1)*(m-1)+(n-1))*d1 + ((m-1) * d2);
    } else {
      return ((m-1)*(n-1)+(m-1))*d1 + ((n-1) * d2);
    }
}

void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n , m; cin >> n >> m;
    
    long long a[n*m]; for (int i=0;i<n*m;i++) cin >> a[i];
    
    sort(a,a+n*m);

    cout << max(thisfunc(abs(a[0]-a[n*m-1]),abs(a[0]-a[n*m-2]),n,m),thisfunc(a[n*m-1]-a[0],a[n*m-1]-a[1],n,m)) << '\n';
  }

}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}