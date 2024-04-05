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
    vector<int> v;
    unordered_map<int,bool> m;
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (!m[x]) v.push_back(x);
      m[x] = 1;
    }
    sort(v.begin(),v.end());

    int mx = 1 , N = v.size();
    for (int i=0;i<N;i++) {
      int l = i , r = N-1 , m;
      while (l <= r) {
        m = (l + r) / 2;
        if (v[m] - v[i] > n - 1) r = m - 1;
        if (v[m] - v[i] <= n - 1) l = m + 1;
      }
      mx = max(r - i + 1 , mx);
    }

    cout << mx << '\n';
  }

  

     
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
