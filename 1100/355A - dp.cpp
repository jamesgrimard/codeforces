// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int myFunction(string s) {
	int sum = 0;
	for (int i=0;i<s.size();i++) sum += (s[i]-'0');
	if (sum > 9) return myFunction(to_string(sum));
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , k; cin >> n >> k;

	string s = "1" , S = "9";
	for (int i=0;i<n-1;i++) {
		s += "0";
		S += "9";
	}

	if (n == 1) {
		cout << k;
		return 0;
	}
		
	bool ans = 0;

	while (1) {
		if (s == S) break;
		if (myFunction(s) == k) {
			ans = 1;
			break;
		}
		for (int i=s.size()-1;i>=0;i--) {
			if (s[i] < '9') {
				s[i]++;
				break;
			}
		}
	}

	ans == 0 ? cout << "No solution" : cout << s;




	return 0;
}