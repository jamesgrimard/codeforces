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
    set<pair<int,int>> a,b,c;

    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (a.size() < 3) {
        a.emplace(x,i);
        continue;
      }
      auto mn = a.begin();
      if (x > mn->first) {
        if (a.size() == 3) a.erase(mn);
        a.emplace(x,i);
      }
    }

    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (b.size() < 3) {
        b.emplace(x,i);
        continue;
      }
      auto mn = b.begin();
      if (x > mn->first) {
        if (b.size() == 3) b.erase(mn);
        b.emplace(x,i);
      }
    }

    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (c.size() < 3) {
        c.emplace(x,i);
        continue;
      }
      auto mn = c.begin();
      if (x > mn->first) {
        if (c.size() == 3) c.erase(mn);
        c.emplace(x,i);
      }
    }
    

    long long mx = 0;
    for (auto x:a) {
      for (auto y:b) {
        for (auto z:c) {
          if (x.second != y.second && x.second != z.second && y.second != z.second) {
            mx = max(mx,(long long) x.first + y.first + z.first);
          }
        }
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

                                                             
 
