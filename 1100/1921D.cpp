//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int n , m; cin >> n >> m;
  int a[n] , b[m]; 
  for (int i=0;i<n;i++) cin >> a[i];
  for (int i=0;i<m;i++) cin >> b[i];

  sort(a,a+n);
  sort(b,b+m,[](const int &a , const int &b){return a > b;});
  int UL = 0 , LL = 0 , UR = n-1 , LR = m-1;
  long long cnt = 0;
  
  while (UL + (n-UR-1) < n) {
    if (abs(a[UL]-b[LL]) >= abs(a[UR]-b[LR])) {
      cnt += abs(a[UL]-b[LL]);
      UL++ , LL++;
    } else {
      cnt += abs(a[UR]-b[LR]);
      UR--, LR--;
    }
  }
  
  cout << cnt << '\n';
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  int tt; cin >> tt; 
  while (tt--) solve();
 	
  return 0;
}

