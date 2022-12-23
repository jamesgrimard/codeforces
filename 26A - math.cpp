// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x) {
	int n = sqrt(x);
	for (int i=2;i<=n;i++){
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	int count = 0;

	for (int j=1;j<=n;j++) {

		vector<int> a;

		for (int i=j/2;i>1;i--) {
			if (j % i == 0) a.push_back(i);
		} 

		int tally = 0;
		for (int i=0;i<a.size();i++) {
			if (isPrime(a[i]) == true) tally++;
		}

		if (tally == 2) count ++;
		
	}
	
	cout << count << '\n';

	return 0;
}
