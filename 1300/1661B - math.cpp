// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 

	int n; cin >> n;
	for (int i=0;i<n;i++) {
		int x,mn = 15; cin >> x;
		for (int j=0;j<=15;j++) {
			int X = x + j , cnt = j;
			while (X % 32768 != 0) {
				X = (X*2) % 32768;
				cnt++;
			}
			mn = min(mn,cnt);
		}
		cout << mn << " ";
	}
	
	return 0;	
}