// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
                                      
  int tt; cin >> tt;
  while (tt--) {
  	int a[3]; for (int i=0;i<3;i++) cin >> a[i];
  	sort(a,a+3, [](const int &a , const int &b) {return a > b;});
  	if (a[1] == a[2]) {
			(a[2] * 2 * 2 == a[0] || a[2] * 3 == a[0] || a[2] * 2 == a[0] || a[2] == a[0]) ? cout << "YES\n" : cout << "NO\n";
		} else if (a[1] == a[2]*2) {
			(a[2] * 3 == a[0] || a[2] * 2 == a[0]) ? cout << "YES\n" : cout << "NO\n";
		} else {
		 	cout << "NO\n";
		}
  }


                  
  return 0;
}