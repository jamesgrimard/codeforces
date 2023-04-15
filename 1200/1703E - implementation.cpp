// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ;cin >> n;
		vector<string> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		int cnt = 0;
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				if (a[i][j] == '2') continue;
				if (n % 2 == 1 && i == n/2 && j == n/2) continue;
				int cnt0 = 0 , cnt1 = 0;
				(a[i][j] == '0') ? cnt0++ : cnt1++; a[i][j] = '2';
				(a[n-1-i][n-1-j] == '0') ? cnt0++ : cnt1++; a[n-1-i][n-1-j] = '2';
				(a[(n-1)-abs(j-(n-1))][abs(i-(n-1))] == '0') ? cnt0++ : cnt1++; a[(n-1)-abs(j-(n-1))][abs(i-(n-1))] = '2';
				(a[n-1-((n-1)-abs(j-(n-1)))][n-1-(abs(i-(n-1)))] == '0') ? cnt0++ : cnt1++; a[n-1-((n-1)-abs(j-(n-1)))][n-1-(abs(i-(n-1)))] = '2';
				cnt += min(4-cnt0,4-cnt1);

			}
		}
		cout << cnt << '\n';
	}

	return 0;
}