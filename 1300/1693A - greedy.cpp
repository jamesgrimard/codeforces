// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
 	int tt; cin >> tt;
 	while (tt--) {
 		long long n; cin >> n;
 		vector<long long> a(n),b(n);
 		long long l = n-1;
 		for (long long i=0;i<n;i++) {
 			cin >> a[i];
 			if (a[i] != 0) l = i;
 		}
 		bool ans = 1;
 		if (a[l] < 0) {
 			long long sum = 0;
 			for (long long i=l-1;i>=0;i--) {
 				(i == l-1) ? b[i] = a[i] - a[l] * -1LL : b[i] = a[i]-1LL;
 			}
 			for (int i=0;i<l;i++) {
 				sum += b[i];
 				if (i + sum < 0 || i == l-1 && i + sum != 0) ans = 0;
 			}
 		} else if (a[l] > 0) {
 			ans = 0;
 		}
 		ans == 1 ? cout << "Yes\n" : cout << "No\n";
 	}


	return 0;	
}