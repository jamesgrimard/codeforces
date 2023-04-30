// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<vector<int>> a = {
		{1,2,3,4,5,6,7,8,9,10},
		{2,4,6,8,10},
		{3,6,9,12,15,18,21,24,27,30},
		{4,8,12,16,20},
		{5,10},
		{6,12,18,24,30},
		{7,14,21,28,35,42,49,56,63,70},
		{8,16,24,32,40},
		{9,18,27,36,45,54,63,72,81,90}
	};
	vector<int> s(10);
	for (int i=1;i<=9;i++) {
		for (int j=0;j<a[i-1].size();j++) s[i] += (a[i-1][j]%10);
	}
	
	int tt; cin >> tt;
	while (tt--) {
		long long n , k; cin >> n >> k;
		if (k % 10 == 0) {
			cout << 0 << '\n';
			continue;
		}
		long long N = n / k, q = k % 10 , sum = 0;
		sum += N / a[q-1].size() * s[q];
		for (int i=0;i<N%a[q-1].size();i++) sum += (a[q-1][i]%10);
		cout << sum << '\n';
	}

	return 0;
}