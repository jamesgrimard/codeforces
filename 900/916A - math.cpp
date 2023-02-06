// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int x; cin >> x; 
	int a , b ; cin >> a >> b;

	int k = (a*60)+b + 1440;

	int tally = 0;

	while (k % 60 % 10 != 7 && (k/60) % 24 % 10 != 7) {
		//cout << k << '\n';
		k -= x; tally++;
	}

	cout << tally;



	

	return 0;
}

