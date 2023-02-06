// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;cin >> tt;

	while (tt--) {
		int a , b; cin >> a >>b;
		int p = 0;
		if ((a-1) % 4 == 0) p = a-1;
		if ((a-1) % 4 == 1) p = 1;
		if ((a-1) % 4 == 2) p = a;
		
		if (p == b) {
			cout << a;
		} else {
			if ((p^a) == b) {
				cout << (a+2);
			} else {
				cout << (a +1);
			}
		}
		cout << '\n';
	}

	return 0;
}


// Method 2 (Efficient method) : 
// 1- Find the remainder of n by moduling it with 4. 
// 2- If rem = 0, then XOR will be same as n. 
// 3- If rem = 1, then XOR will be 1. 
// 4- If rem = 2, then XOR will be n+1. 
// 5- If rem = 3 ,then XOR will be 0.