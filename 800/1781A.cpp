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
		int w,d,h; cin >> w >> d >> h;
		int a,b,f,g; cin >> a >> b >> f >> g;
		int A = min(a+f,(w-a)+(w-f)) + abs(b-g);
		int B = min(b+g,(d-b)+(d-g)) + abs(a-f);
		cout << min(A,B) + h << '\n';
	}	
	
	return 0;
}