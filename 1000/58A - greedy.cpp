// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


	string s; cin >> s;

	int count = 5;

	vector<char> a = {'h','e','l','l','o'};

	for (int i=size(s)-1;i>=0;i--) {
		if (s[i] == a[count-1]) {
			count--; 
		}
	}
	(count == 0) ? cout << "YES" : cout << "NO";


	return 0;
}

