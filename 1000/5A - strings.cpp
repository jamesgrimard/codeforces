// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int total = 0 , sum = 0;
	string s;
	while (getline(cin,s)) {
		if (s[0] == '+') {
			total++;
		} else if (s[0] == '-') {
			total--;
		} else {
			int l = 0;
			for (int j=size(s)-1;j>=0;j--) {
				if (s[j] == ':') {
					l = size(s)-1 - j;
					break;
				}
			}
			sum += (l*total);
		}

	}

	cout << sum;

	return 0;
}

