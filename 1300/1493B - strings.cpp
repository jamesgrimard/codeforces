// github.com/jamesgrimard/codeforces

#include <bits/stdc++.h> 

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  int tt; cin >> tt;
  while (tt--) {

    int h,m; cin >> h >> m;
    string s; cin >> s;
    string a = s.substr(0,2) , b = s.substr(3,2) , reflection_a = "xx" , reflection_b = "xx";
    map<char,bool> M; M['0'] = 1 , M['1'] = 1 , M['2'] = 1 , M['5'] = 1 , M['8'] = 1;
    map<char,char> MM; MM['0'] = '0' , MM['1'] = '1' , MM['2'] = '5' , MM['5'] = '2' , MM['8'] = '8';
    reflection_a[0] = MM[b[1]]; reflection_a[1] = MM[b[0]];
    reflection_b[0] = MM[a[1]]; reflection_b[1] = MM[a[0]];

    while (M[b[1]] != 1 || M[b[0]] != 1 || M[a[0]] != 1 || M[a[1]] != 1 || stoi(reflection_a) >= h || stoi(reflection_b) >= m) {
      int hh = stoi(a) , mm = stoi(b);
      mm = (mm + 1) % m;
      if (mm == 0) hh = (hh + 1) % h;
      a = to_string(hh) , b = to_string(mm);
      if (hh < 10) a = "0" + a;
      if (mm < 10) b = "0" + b;
      reflection_a[0] = MM[b[1]]; reflection_a[1] = MM[b[0]];
      reflection_b[0] = MM[a[1]]; reflection_b[1] = MM[a[0]];
      //cout << reflection_b << " " << reflection_a << '\n';
      //cout << a << " " << b << '\n';
    }

    cout << a << ":" << b << '\n';

  }

  return 0;   

}