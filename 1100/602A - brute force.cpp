// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , b1; cin >> n>> b1;
	vector<long long> B1(n);
	for (long long i=0;i<n;i++) cin >> B1[i];
	long long m , b2; cin >> m >> b2;
	vector<long long> B2(m);
	for (long long i=0;i<m;i++) cin >> B2[i];

	long long sum1 = 0 , sum2 = 0;

	for (long long i=0;i<n;i++) sum1 += pow(b1,n-1LL-i) * B1[i];
	for (long long i=0;i<m;i++) sum2 += pow(b2,m-1LL-i) * B2[i];
	
	if (sum1 < sum2) {
		cout << "<";
	} else if (sum1 == sum2) {
		cout << "=";
	} else {
		cout << ">";
	}


	return 0;
}

