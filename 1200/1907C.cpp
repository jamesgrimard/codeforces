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
    string s; cin >> s;
    int a[26] = {};
    for (int i=0;i<n;i++) a[s[i]-'a']++;
    int mn = (n&1);
    for (auto x:a) mn = max(mn,max(x-(n-x),(n&1)));
    cout << mn << '\n';

  }
      


     
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
