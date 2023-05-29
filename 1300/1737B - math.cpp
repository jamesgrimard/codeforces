// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
 	int tt; cin >> tt;
 	while (tt--) {
 		long long l ,r; cin >> l >> r;
 		long long A = sqrtl(l) , B = sqrtl(r) , cnt = 0;
 		cnt += (B-A)*3LL;
 		A *= A , B *= B;
 		while (A < l) {
 			cnt--;
 			A += sqrtl(A);
 		}
 		while (B <= r) {
 			cnt++;
 			B += sqrtl(B);
 		}
 		cout << cnt << '\n';
 	}

	return 0;	
}