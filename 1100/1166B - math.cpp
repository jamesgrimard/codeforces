// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	if (n % 25 == 0) {
		for (int i=0;i<n/25;i++) cout << "aeiouuaeioouaeiiouaeeioua";
		return 0;
	}
	int k = 5 , p = -1;
	while (n / k >= 5) {
		if (n % k == 0) {
			p = n / k;
			break;
		}
		k++;
	}
	if (p == -1) {
		cout << p;
		return 0;
	}
	map<int,char> m;
	m[1] = 'a' , m[2] = 'e' , m[3] = 'i' , m[4] = 'o' , m[0] = 'u';
	for (int i=1;i<=p*k;i++) cout << m[i%5];
	


	return 0;
}
