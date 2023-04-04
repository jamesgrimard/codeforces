// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	vector<string> a = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

	int n; cin >> n;
	
	vector<int> b = {1,2,3,4,5};
	if (n <= 5) {
		cout << a[n-1];
		return 0;
	}
	for (int j=1;j<=32;j++) {
		for (int i=0;i<5;i++) {
			b[i] = b[i] * 2 + 5;
			if (n <= b[i]) {
				cout << a[i];
				goto out;
			}
		}	
	}

	out: return 0;
}
