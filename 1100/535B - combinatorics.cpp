// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s ; cin >> s;

	long long sum = 0;

	for (int i=0;i<s.size();i++) {
		sum *= 2;
		s[i] == '4' ? sum += 1 : sum += 2;
	}

	cout << sum;


	return 0;
}

