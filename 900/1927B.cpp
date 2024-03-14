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
		int n; cin >> n;
		int a[n+1]= {};
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			cout << char(97 + a[x]);
			a[x]++;
		}
		cout << '\n';
	}			                         


 	return 0;
}