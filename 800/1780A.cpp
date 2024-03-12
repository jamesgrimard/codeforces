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
		int a[n] , cnte = 0 , cnto = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			(a[i] & 1) ? cnto++ : cnte++;
		}
		if (cnto >= 3) {
			cout << "YES\n";
			int A = 3;
			for (int i=0;i<n;i++) {
				if (A == 0) break;
				if (a[i] & 1) {
					A--;
					cout << i + 1 << " ";
				}
			}
		} else if (cnte >= 2 && cnto >= 1) {
		 	cout << "YES\n";
		 	int A = 2 , B = 1;
		 	for (int i=0;i<n;i++) {
				if (A == 0 && B == 0) break;
				if (a[i] % 2 == 1 && B > 0) {
					cout << i + 1 << " ";
					B--;
				} else if (a[i] % 2 == 0 && A > 0) {
					cout << i + 1 << " ";
					A--;
				}
			}					 		
		} else {
			cout << "NO";
		}
		cout << '\n';
	}
 	
 	
 	
 	return 0;
}