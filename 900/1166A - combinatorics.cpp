// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	map<char,int> m;

	for (int i=0;i<n;i++){
		string s; cin >> s;
		m[s[0]]++;
	}

	int sum = 0;

	for (auto [k,v] : m) {
		if (v > 2) {
			int k = v/2-1;
			sum += (k*k+k)/2;
			if (v % 2 == 1) {
				sum += ((k+1)*(k+1)+(k+1))/2;
			} else {
				sum += (k*k+k)/2;;
			}
		}
	}

	cout << sum;

	return 0;
}

