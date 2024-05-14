// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1932/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    char trump; cin >> trump;
    vector<int> H,D,S,C,T;
    for (int i=0;i<2*n;i++) {
      string s; cin >> s;
      if (s[1] == 'H') H.push_back(s[0]-'0');
      if (s[1] == 'S') S.push_back(s[0]-'0');
      if (s[1] == 'C') C.push_back(s[0]-'0');
      if (s[1] == 'D') D.push_back(s[0]-'0');
      if (s[1] == trump) T.push_back(s[0]-'0');
    }
    
    sort(H.rbegin(),H.rend());
    sort(S.rbegin(),S.rend());
    sort(D.rbegin(),D.rend());
    sort(C.rbegin(),C.rend());
    sort(T.rbegin(),T.rend());

    bool ans = 1 , _H = 0 , _S = 0 , _D = 0 , _C = 0;

    if (trump != 'H' && H.size() % 2 && !T.empty()) {
      H.push_back(T.back());
      T.pop_back();
      _H = 1;
    }
    if (trump != 'S' && S.size() % 2 && !T.empty()) {
      S.push_back(T.back());
      T.pop_back();
      _S = 1;
    }
    if (trump != 'C' && C.size() % 2 && !T.empty()) {
      C.push_back(T.back());
      T.pop_back();
      _C = 1;
    }
    if (trump != 'D' && D.size() % 2 && !T.empty()) {
      D.push_back(T.back());
      T.pop_back();
      _D = 1;
    }

    if (T.size() % 2) ans = 0;
    if (trump != 'D' && T.size() % 2) ans = 0;
    if (trump != 'H' && H.size() % 2) ans = 0;
    if (trump != 'S' && S.size() % 2) ans = 0;
    if (trump != 'C' && C.size() % 2) ans = 0;

    if (ans) {
      if (T.size()) for (int i=T.size()-1;i>=0;i-=2) cout << T[i] << trump << " " << T[i-1] << trump << '\n';
      if (trump != 'H' && H.size()) {
        if (_H) {
          cout << H[H.size()-2] << 'H' << " " << H[H.size()-1] << trump << '\n';
          for (int i=H.size()-3;i>=0;i-=2) cout << H[i] << 'H' << " " << H[i-1] << 'H' << '\n';
        } else {          
          for (int i=H.size()-1;i>=0;i-=2) cout << H[i] << 'H' << " " << H[i-1] << 'H' << '\n';
        }
      }
      if (trump != 'D' && D.size()) {
        if (_D) {
          cout << D[D.size()-2] << 'D' << " " << D[D.size()-1] << trump << '\n';
          for (int i=D.size()-3;i>=0;i-=2) cout << D[i] << 'D' << " " << D[i-1] << 'D' << '\n';
        } else {          
          for (int i=D.size()-1;i>=0;i-=2) cout << D[i] << 'D' << " " << D[i-1] << 'D' << '\n';
        }
      }
      if (trump != 'S' && S.size()) {
        if (_S) {
          cout << S[S.size()-2] << 'S' << " " << S[S.size()-1] << trump << '\n';
          for (int i=S.size()-3;i>=0;i-=2) cout << S[i] << 'S' << " " << S[i-1] << 'S' << '\n';
        } else {          
          for (int i=S.size()-1;i>=0;i-=2) cout << S[i] << 'S' << " " << S[i-1] << 'S' << '\n';
        }
      }
      if (trump != 'C' && C.size()) {
        if (_C) {
          cout << C[C.size()-2] << 'C' << " " << C[C.size()-1] << trump << '\n';
          for (int i=C.size()-3;i>=0;i-=2) cout << C[i] << 'C' << " " << C[i-1] << 'C' << '\n';
        } else {          
          for (int i=C.size()-1;i>=0;i-=2) cout << C[i] << 'C' << " " << C[i-1] << 'C' << '\n';
        }
      }
    } else {
      cout << "IMPOSSIBLE\n";
    }
  }


  
}
  
int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
  
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*
  
*/