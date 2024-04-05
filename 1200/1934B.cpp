//github.com/jamesgrimard/codeforces
  
#include <bits/stdc++.h>
       
using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;
            
void solve() {                 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int a[5] = {1,3,6,10,15} , mn = n;
		for (int i=4;i>=1;i--) {
			int N = n , cnt = 0 , N2 = n , cnt2 = 0;
			for (int j=i;j>=0;j--) {
				if (j == i) {
					int p = max(0,N2 / a[j] - 1);
					cnt2 += p;
					N2 -= a[j] * p;
				} else {
					cnt2 += N2 / a[j];
					N2 %= a[j];
				}							
				cnt += N / a[j];
				N %= a[j];
				if (N2 == 12 || N2 == 20) {
					cnt2 += 2;
					N2 = 0;
				}
				if (N2 == 23 || N2 == 24 || N2 == 27) {
					cnt2 += 3;
					N2 = 0;
				}
				if (N == 12 || N == 20) {
					cnt += 2;
					N = 0;
				}
				if (N == 23 || N == 24 || N == 27) {
					cnt += 3;
					N = 0;
				}
				
			}
			mn = min(mn,min(cnt2,cnt));
		}
		cout << mn << '\n';
	}

}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
